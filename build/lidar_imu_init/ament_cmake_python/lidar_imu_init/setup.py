from setuptools import find_packages
from setuptools import setup

setup(
    name='lidar_imu_init',
    version='0.0.0',
    packages=find_packages(
        include=('lidar_imu_init', 'lidar_imu_init.*')),
)
