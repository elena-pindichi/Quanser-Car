from setuptools import find_packages, setup

package_name = 'mpc_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='bajdus',
    maintainer_email='bajdus@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [ 
            'nmpc-controller=mpc_controller.NMPC_ROS2:main',
            'flmpc-controller=mpc_controller.FLMPC_ROS2:main'
        ],
    },
)
