#!/usr/bin/env python3

"""
Intialize a ROS2 node using rclpy, which publishes even numbers and results after processing.
The Ex2_node is defined in the exercise2 package. This is the executable to run the publisher and subscriber
spinning it to keep the node alive and process data.

Usage:
    To run the script, use the following command:
    ```
    ros2 run exercise2 ex2_demo
    ```
"""
import rclpy
# Import the Ex2_node class
from exercise2.ex2_interface import (
    Ex2_node,
)

def main(args=None):
    """
    Main function to run the node

    Args:
        args (list, optional): None
    """
    rclpy.init(args=args)
    # Instance of the class with node name 'ex2'
    node = Ex2_node('ex2')
    # Access the publisher
    node.publish_number()
    # Spin the node
    try:
        rclpy.spin(node)
    except:
        node.destroy_node()
        rclpy.shutdown()

# Execute the main function when it is executed
if __name__ == '__main__':
    main()