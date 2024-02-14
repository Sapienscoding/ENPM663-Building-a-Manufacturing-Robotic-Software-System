import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='ariac_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('ariac_moveit_config', 'ariac_moveit_config.*')),
)
