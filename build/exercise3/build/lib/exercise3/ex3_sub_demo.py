#!/usr/bin/env python3
"""
Intialize a ROS2 node using rclpy, which subscribes temperature and humidity values.
The Ex3_node_sub is defined in the exercise3 package. This is the executable to run the subscriber
spinning it to keep the node alive and process data.

Usage:
    To run the script, use the following command:
    ```
    ros2 run exercise3 ex3_sub_demo
    ```
"""
import rclpy
# Import the Ex3_node_sub class
from exercise3.ex3_sub_interface import(
    Ex3_node_sub,
)

def main(args = None):
    """
    Main function to run the node

    Args:
        args (list, optional): None
    """
    # Initialize the ROS client library
    rclpy.init(args=args)
    # Instance of the class with node name 'ex3_sub'
    node = Ex3_node_sub('ex3_sub')
    try:
        rclpy.spin(node)
    except:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()