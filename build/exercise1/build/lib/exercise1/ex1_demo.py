#!/usr/bin/env python3

"""
Intialize a ROS2 node using rclpy, which publishes even numbers.
The Ex1_node is defined in the exercise1 package. This is the executable to run the publisher and subscriber
spinning it to keep the node alive and process data.

Usage:
    To run the script, use the following command:
    ```
    ros2 run exercise1 ex1_demo
    ```
"""
import rclpy
# Import the Ex1_node class
from exercise1.ex1_interface import (
    Ex1_node,
)

def main(args=None):
    """
    Main function to run the node

    Args:
        args (list, optional): None
    """
    rclpy.init(args=args)
    # Instance of the class with node name 'ex1'
    node = Ex1_node('ex1')
    # Access the publisher
    node.publish_message()
    try:
        rclpy.spin(node)
    except:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()