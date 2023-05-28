from beagle_first_package.beagle_camera import new_label, conf, cam, tmi 
import rclpy
from rclpy.node import Node
from std_msgs.msg import String





class DICE_CHECKER(Node):

    def __init__(self):

        super().__init__('DICE_NUM_publisher')

        self.label = new_label
        self.conf = conf 
        self.cam = cam
        self.tmi = tmi 
     
        self.publisher_dice1 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice2 = self.create_publisher(String, 'topic', 10)
        self.publisher_dice3 = self.create_publisher(String, 'topic', 10)
 
        timer_period =0.5  # seconds
        cam.count_down(5)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
   

    def cam_checker(self) :     
        image = self.cam.read()
        if self.tmi.predict(image) :
            
   
            # label_new = np.array2string(label)
            #  msg.data = label_new

            if self.conf > 0.8 :  # confidence 80% over 
                print(self.label, self.conf) 


    def timer_callback(self):
        msg = String()
        
        msg.data = self.label
        if self.conf > 0.8 :
            if msg.data == 'DICE1':
                self.publisher_dice1.publish("DICE1")
                self.get_logger().info('Publishing: "DICE1"')
                '''
            if msg.data == 'DICE2' :
                self.publisher_dice2.publish("DICE2")
                self.get_logger().info('Publishing: "DICE2"')
            if msg.data == 'DICE3' :
                self.publisher_dice3.publish("DICE3")
                self.get_logger().info('Publishing: "DICE3"')
                '''


       


def main(args=None):
    rclpy.init(args=args)

    dice_publisher = DICE_CHECKER()

    rclpy.spin(dice_publisher)
    dice_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()