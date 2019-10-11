// This program subscr ibes to tu r t l e 1 /pose and shows i t s// messages on the screen .
#include<ros/ros.h>
#include<turtlesim/Pose.h>
#include<iomanip> // for std : : se tp rec is ion and std : : f i x ed
// A ca l lba c k function . Executed each time a new pos
// message a r r ives .

void poseMessageReceived (const turtlesim::Pose&msg){
ROS_INFO_STREAM( std::setprecision(2) << std::fixed
    << "position =(" << msg.x << " , " << msg.y << " )"
    << " direction= " << msg.theta);
} 
int main (int argc , char **argv) {
        // I n i t i a l i z e the ROS system and become a node .
        ros::init(argc,argv , "subscribe_topose");
        ros::NodeHandle nh ;
        
        // Create a subscr iber ob jec t .
        ros::Subscriber sub = nh.subscribe ("turtle1/pose",1000,
            &poseMessageReceived);
        
        // Let ROS take over .
        ros::spin();
} 