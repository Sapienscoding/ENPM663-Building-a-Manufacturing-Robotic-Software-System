from rclpy.node import Node
from std_msgs.msg import Float32
import random


class Ex3_node_pub(Node):
    """
    A ROS2 publisher node that publishes temperature and humidity values to the 'environment/temperature' & 'environment/humidity'
    at 1 Hz rate.

    Attributes:
        _publisher_temp (temperature publisher): Publishes temperature values
        _publisher_humid (humidity publisher): Publishes humidity values
        _timer (Timer): A timer that calls publisher every second
        _temp (Float32): Holds temperature values
        _humid (Float32): Holds humidity values
    
    Args:
        node_name (str): Name of the node
    """
    def __init__(self,node_name):
        """
        Initializes the publisher node, creates a publisher for the topic and timer to publish message

        Args:
            node_name (str): Name of the node
        """
        super().__init__(node_name)
        # Create a publisher for temperature values for the topic 'environment/temperature'
        self._publisher_temp = self.create_publisher(Float32, 'environment/temperature', 10)
        # Create a publisher for humidity values for the topic 'environment/humidity'
        self._publisher_humid = self.create_publisher(Float32, 'environment/humidity', 10)
        # Create a timer that calls publish_data every second
        self._timer = self.create_timer(1, self.publish_data)
        # Variables for msg values
        self._temp = Float32()
        self._humid = Float32()
    
    def publish_data(self):
        """
        Callback function for the timer. It publish the appropriate message and generate logs to the ROS2 logger.
        """
        # Initialize temperature and humidity values 
        temp_range = random.uniform(0,100)
        humid_range = random.uniform(0,100)
        self._temp.data = temp_range
        self._humid.data = humid_range
        # Publish the data
        self._publisher_temp.publish(self._temp)
        self._publisher_humid.publish(self._humid)
        # Log the data being published
        self.get_logger().info(f'Temperature: {temp_range}, Humidity: {humid_range}')
        

