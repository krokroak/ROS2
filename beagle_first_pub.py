
'''import rclpy
from rclpy.node import Node
#from beagle_first_package.beagle_camera import conf, label
import numpy as np
from std_msgs.msg import String

import roboidai as ai




# 하나의 publish에서 하나의 토픽만 쏘기가가능 
# lable == > numpy.str ==> str()


class DICE_CHECKER(Node):

    def __init__(self):

        super().__init__('DICE_NUM_publisher')

        
     
        self.publisher_dice1 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice2 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice3 = self.create_publisher(String, 'topic', 10)
 
        timer_period = 0.5  # seconds

        self.timer = self.create_timer(timer_period, self.timer_callback)


    def timer_callback(self):
        msg = String()
        msg.data = label.item() if label is not None else ""
       
        if msg.data == 'DICE1':
            self.publisher_dice1.publish("DICE1")
            self.get_logger().info('Publishing: "DICE1"')
            
        elif msg.data == 'DICE2' :
            self.publisher_dice2.publish("DICE2")
            self.get_logger().info('Publishing: "DICE2"')
            
        elif msg.data == 'DICE3' :
            self.publisher_dice3.publish("DICE3")
            self.get_logger().info('Publishing: "DICE3"')
        
                                


def main(args=None):
    rclpy.init(args=args)

    dice_publisher = DICE_CHECKER()

    rclpy.spin(dice_publisher)
    dice_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
'''
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time
import roboidai as ai

tmi = ai.TmImage()
tmi.load_model('/home/k/DICE/converted_keras')

cam = ai.Camera('ip0', square=True)

print("countdown start")
cam.count_down(5)
print("countdown off")

class DICE_CHECKER(Node):
    def __init__(self):
        super().__init__('DICE_NUM_publisher')
        self.cam = cam
        self.tmi = tmi
        self.publisher_dice1 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice2 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice3 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice4 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice5 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice6 = self.create_publisher(String, 'topic', 10)
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        
        image = self.cam.read()
        if self.tmi.predict(image):
            label = self.tmi.get_label()
            conf = self.tmi.get_conf()
            if conf > 0.8:
                if label == 'DICE1': #numpy.str --> msg.data->string _
                    msg = String()
                    msg.data = 'DICE1'
                    self.publisher_dice1.publish(msg)
                    self.get_logger().info('Publishing: "DICE1"')
                elif label == 'DICE2':
                    msg = String()
                    msg.data = 'DICE2'
                    self.publisher_dice2.publish(msg)
                    self.get_logger().info('Publishing: "DICE2"')
                elif label == 'DICE3':
                    msg = String()
                    msg.data = 'DICE3'
                    self.publisher_dice3.publish(msg)
                    self.get_logger().info('Publishing: "DICE3"')
                elif label == 'DICE4':
                    msg = String()
                    msg.data = 'DICE4'
                    self.publisher_dice4.publish(msg)
                    self.get_logger().info('Publishing: "DICE4"')
                elif label == 'DICE5':
                    msg = String()
                    msg.data = 'DICE5'
                    self.publisher_dice5.publish(msg)
                    self.get_logger().info('Publishing: "DICE5"')
                elif label == 'DICE6':
                    msg = String()
                    msg.data = 'DICE6'
                    self.publisher_dice6.publish(msg)
                    self.get_logger().info('Publishing: "DICE6"')

def main(args=None):
    rclpy.init(args=args)
    dice_publisher = DICE_CHECKER()
    rclpy.spin(dice_publisher)
    dice_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
