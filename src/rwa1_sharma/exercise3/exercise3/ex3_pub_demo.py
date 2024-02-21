#!usr/bin/env python3

"""
Intialize a ROS2 node using rclpy, which publishes temperature and humidity values.
The Ex3_node_pub is defined in the exercise3 package. This is the executable to run the publisher
spinning it to keep the node alive and process data.

Usage:
    To run the script, use the following command:
    ```
    ros2 run exercise3 ex3_pub_demo
    ```
"""
import rclpy
# Import the Ex3_node_pub class
from exercise3.ex3_pub_interface import(
    Ex3_node_pub,
)


def main(args = None):
    """
    Main function to run the node

    Args:
        args (list, optional): None
    """
    # Initialize the ROS client library
    rclpy.init(args=args)
    # Instance of the class with node name 'ex3_pub'
    node = Ex3_node_pub('ex3_pub')
    # Access the publisher
    node.publish_data()
    # Spin the node
    try:
        rclpy.spin(node)
    except:
        node.destroy_node()
        rclpy.shutdown()

# Execute the main function when it is executed
if __name__ == '__main__':
    main()
