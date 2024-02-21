from rclpy.node import Node
from std_msgs.msg import Int32

class Ex2_node(Node):
    """
    A ROS2 publisher node that publishes Integer values to the 'even_number' and 'divided_number' topic
    at 1 Hz rate.

    Attributes:
        _publisher_int (integer publisher): Publishes int32 values
        _publisher_result (result publisher): Publishes result after operation
        _timer (Timer): A timer that calls publisher every second
        _subscriber (Subscriber): Subscribes to 'even_number' and then divide them
        _msg (Int32): Holds Integer values
        _result_msg (Int32): Holds result
    
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
        # Create publisher object for the 'even_number' topic
        self._publisher_int = self.create_publisher(Int32, 'even_number', 10)
        # Create publisher object for the 'divided_number' topic
        self._publisher_result = self.create_publisher(Int32, 'divided_number', 10)
        # Timer that calls publish_number every second(1Hz)
        self._timer = self.create_timer(1, self.publish_number)
        # Create subscriber object for the 'even_number' topic
        self._subscriber = self.create_subscription(Int32, 'even_number', self.subscribe_callback, 10)
        # Initialize the start of the integer
        self.start = 0
        # Message for publishing
        self._msg = Int32()
        self._result_msg = Int32()
    
    def subscribe_callback(self,msg):
        """
        Callback function for the subscriber, recieve 'even_number' topic messages
        , divide them and calls publisher to display results. Logs corresponding messages.

        Args:
            msg (Int32): Holds the number
        """
        # Condition to check even number
        if msg.data % 2 == 0:
            self.get_logger().info(f'Received even number: {msg.data}')
        # Process the number 
        self._result_msg.data = msg.data // 2
        # Publish the results 
        self._publisher_result.publish(self._result_msg)
        self.get_logger().info(f'Publishing divided result: {self._result_msg.data}')
    
    def publish_number(self):
        """
        Callback function for the timer. It publishes even_number messages
        """
        # Condition to check even number
        if self.start % 2 == 0:
            self.get_logger().info(f'Publishing even number: {self.start}')
            self._msg.data = self.start
            # Publish it 
            self._publisher_int.publish(self._msg)
        self.start += 1