import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='ariac_gazebo',
    version='0.0.0',
    packages=find_packages(
        include=('ariac_gazebo', 'ariac_gazebo.*')),
)
