import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='first_package',
    version='0.0.0',
    packages=find_packages(
        include=('first_package', 'first_package.*')),
)
