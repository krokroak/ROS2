import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # param_dir = LaunchConfiguration(
    #     'param_dir',
    #     default=os.path.join(
    #         get_package_share_directory('beagle_first_package'),
    #         'param'))
    return LaunchDescription([
            # Node(
            #     name='beagle_first_sub',
            #     package='beagle_first_package',
            #     executable='beagle_first_sub',
            #     # parameters=[param_dir],
            #     output='screen'),
          
            Node(
                namespace="beagle_lidar_action_client",
                package='beagle_first_package',
                executable='beagle_action_client',
                output='screen'
            ),

              Node(
                namespace='dice_and_point_pub',
                package='beagle_first_package',
                executable='beagle_first_pub',
                output='screen'
            )
        ]
    )