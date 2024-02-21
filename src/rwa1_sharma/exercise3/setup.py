from setuptools import setup

package_name = 'exercise3'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Dhruv Sharma',
    maintainer_email='dhruv337@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ex3_pub_demo = exercise3.ex3_pub_demo:main',
            'ex3_sub_demo = exercise3.ex3_sub_demo:main',
        ],
    },
)
