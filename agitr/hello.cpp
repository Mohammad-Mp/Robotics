// This i s a ROS version of the standard " h e l l o , world"
// program .

// This header defines the standard ROS c l a s s e s .
#include<ros/ros.h> 

int main (int argc , char **argv ) {
// I n i t i a l i z e the ROS system .
ros :: init ( argc, argv,"hello");

// E s t a b l i s h t h i s program as a ROS node .
ros :: NodeHandle nh ;

// Send some output as a l o g message .
ROS_INFO_STREAM("Hello,ROS!");
}
