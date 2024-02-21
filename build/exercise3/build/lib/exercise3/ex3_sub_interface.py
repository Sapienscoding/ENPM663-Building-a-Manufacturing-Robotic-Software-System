from rclpy.node import Node
from std_msgs.msg import Float32

class Ex3_node_sub(Node):
    """
    A ROS2 subscriber node that suscribes temperature and humidity values to the 'environment/temperature' & 'environment/humidity'
    at 1 Hz rate.

    Attributes:
        _temp_subscription (temperature subscriber): Subcribe to temperature values and call the temp_callback
        _humid_subscription (humidity subscriber): Publishes humidity values and call the humid_callback
        _timer (Timer): A timer that calls timer_callback every second
        temp (Float32): Holds temperature values
        humid (Float32): Holds humidity values
    
    Args:
        node_name (str): Name of the node
    """
    def __init__(self,node_name):
        """
        Initializes the subscriber node, creates a subscriber for the topic and timer

        Args:
            node_name (str): Name of the node
        """
        super().__init__(node_name)
        # Create a subscriber for temperature values for the topic 'environment/temperature'
        self._temp_subscription = self.create_subscription(Float32, 'environment/temperature', self.temp_callback, 10)
        # Create a subscriber for humidity values for the topic 'environment/humidity'
        self._humid_subscription = self.create_subscription(Float32, 'environment/humidity', self.humid_callback, 10)
        self._timer = self.create_timer(1, self.timer_callback)
        # Intialize the values
        self.temp = 0
        self.humid = 0
    
    def temp_callback(self,msg):
        """
        Temperature subscriber callback function

        Args:
            msg (Float32): Temperature values
        """
        self.temp = msg.data
    
    def humid_callback(self,msg):
        """
        Humidity subscriber callback function

        Args:
            msg (Float32): Humidity values
        """
        self.humid = msg.data
    
    def timer_callback(self):
        """
        Timer callback function to process the values and log the messages
        """
        temp_comfort = self.TempIsComfort()
        humid_comfort = self.HumidIsComfort()
        self.get_logger().info(f'Temperature comfort: {temp_comfort} | Humidity comfort: {humid_comfort}')

    def HumidIsComfort(self):
        """
        Process the Humidity values and generate logs
        """ 
        if self.humid < 30:
            return 'Dry'
        elif 30 <= self.humid <= 60:
            return 'Comfortable'
        else:
            return 'Humid'
    
    def TempIsComfort(self):
        """
        Process the Temperature values and generate logs
        """
        if self.temp < 15:
            return 'Cold'
        elif 15 <= self.temp <= 25:
            return 'Comfortable'
        else:
            return 'Hot'




        

