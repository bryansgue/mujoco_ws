from setuptools import find_packages
from setuptools import setup

setup(
    name='mujoco_ros_utils',
    version='0.1.0',
    packages=find_packages(
        include=('mujoco_ros_utils', 'mujoco_ros_utils.*')),
)
