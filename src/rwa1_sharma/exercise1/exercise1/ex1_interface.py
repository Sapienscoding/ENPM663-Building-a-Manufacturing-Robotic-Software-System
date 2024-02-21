from rclpy.node import Node
from std_msgs.msg import Int32

class Ex1_node(Node):
    """
    A ROS2 publisher node that publishes Integer values to the 'even_number' topic
    at 1 Hz rate.

    Attributes:
        _publisher (Publisher): Publishes int32 values
        _timer (Timer): A timer that calls publisher every second
        _subscriber (Subscriber): Subscribes to 'even_number'
        _msg (Int32): Holds Integer values
    
    Args:
        node_name (str): Name of the node
    """
    def __init__(self,node_name):
        """
        Initializes the node, creates a publisher and subscriber for the topic and timer to publish message

        Args:
            node_name (str): Name of the node
        """
        super().__init__(node_name)
        # Publisher object for the 'even_number' topic
        self._publisher = self.create_publisher(Int32, 'even_number', 10)
        # Timer that calls publish message every second(1Hz)
        self._timer = self.create_timer(1, self.publish_message)
        # Subscriber object for the 'even_number' topic
        self._subscriber = self.create_subscription(Int32, 'even_number', self.subscribe_callback, 10)
        # Initialize the start of the integer
        self.start = 0
        # Message of type Int32
        self._msg = Int32()
    
    def subscribe_callback(self,msg):
        """
        Callback function for the subscriber, recieve 'even_number' topic messages
        ,logs corresponding messages.

        Args:
            msg (Int32): Holds the number
        """
        # Condition to check even number
        if msg.data % 2 == 0:
            self.get_logger().info(f'Received even number: {msg.data}')
    
    def publish_message(self):
        """
        Callback function for the timer. It publishes even_number messages
        """
        # Condition to check even number
        if self.start % 2 == 0:
            self.get_logger().info(f'Publishing even number: {self.start}')
            self._msg.data = self.start
            # Publish the number
            self._publisher.publish(self._msg)
        self.start += 1