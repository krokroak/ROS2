import rclpy as rp
from rclpy.node import Node
from roboid import *
import roboidai as ai
from std_msgs.msg import String


beagle  = Beagle()
class direct_mode_sub(Node) :

    def __init__(self) :

        super().__init__('subscriber_heck')
       
        self.subscription = self.create_subscription(
            String,
            'topic',
            self.listner_callback,
            10
        )
        self.subscription

    def listner_callback(self,msg):
            if msg == "DICE1" :
                 print("dice1")
                 
            if msg == "DICE2" :
                 print("DICE2") 



def main(args =None) :
    rp .init(args = args)
    direct_mode_subscribe = direct_mode_sub()

    rp.spin(direct_mode_subscribe)
    direct_mode_subscribe.destroy_node()
    rp.shutdown()

if __name__== '__main__' :

    main()
