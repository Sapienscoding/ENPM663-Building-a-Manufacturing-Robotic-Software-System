import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='ariac_human',
    version='0.0.0',
    packages=find_packages(
        include=('ariac_human', 'ariac_human.*')),
)
