#include <kipr/wombat.h>
#include <locolib.h>
#include <something.h>
#include <constants.h>
// calibrate_gyro();
// demo_gyro_turn(int speed, int angle, double radius);
// demo_gyro_drive(int speed, double distance);
int main()
{
    //important adds
    calibrate_gyro();
    shut_down_in(119);
    wait_for_light(2);
    
    //getting out
   smart_servo(elbow,25,1.5,0);
    demo_gyro_square_up(-1200);
    msleep(100);
    
    //back up out of square up
    smart_servo(elbow,80,1.5,0);
    msleep(600);
    smart_servo(claw,70,1.5,0);
    msleep(1);
    demo_gyro_drive(1200,-2.15);
    msleep(1);
	
	//turn to grab noodle
    demo_gyro_turn(1100, 15, -.4);
    smart_servo(elbow,105,.2,0);
    msleep(600);
    demo_gyro_drive(1200,.80);
    smart_servo(claw,89,1.5,0);
    msleep(900);
    smart_servo(claw,-30,1.5,0); //30
    msleep(900);
    
    //big turn to get to poll to get noodle on poll
    smart_servo(elbow,5,1.0,0);
    msleep(1000);
    demo_gyro_turn(1100, 75, 0);
    msleep(800);
    smart_servo(elbow,40,1.0,0);
    msleep(800);
   
    //forward for yoke
    demo_gyro_drive(1200,3.2);
    msleep(1000);
    
    //backup for yoke
    demo_gyro_drive(1200,-2.50);
    msleep(1000);
    
    //put on noodle
    smart_servo(elbow,56,1.2,0);
    msleep(1000);
    demo_gyro_turn(1100, 2.10, 0);
    msleep(100);
    smart_servo(claw,95,1.5,0);
    msleep(1000);
    demo_gyro_drive(1200,-.7);
    msleep(1000);
    smart_servo(elbow,105,1.5,0);
    msleep(600);
    
    //big turn to get second noodle
    demo_gyro_turn(-1000, 81, 0);
    msleep(1000);
    demo_gyro_square_up(900);
     msleep(100);
    smart_servo(claw,-40,1.5,0);//45
    msleep(1000);
    smart_servo(elbow,-45,1.2,0);
    msleep(1000);
    
    //turn to go back to poll to put second noodle on
    demo_gyro_turn(1000, 88, 0);
    msleep(1000);
    
    //drive for yoke
    demo_gyro_drive(1200,3.2);
    msleep(1000);
    
    //backup and precaution for yoke
    demo_gyro_drive(1200,-1.45);
    msleep(1000);
    demo_gyro_turn(1000, 4, 0);
    smart_servo(elbow,-1,1.2,0);
    msleep(1000);
    
    //open claw, back up, and turn to get third pool noodle
    smart_servo(claw,40,1.5,0);
    msleep(1000);
    demo_gyro_drive(1200,-1);
    msleep(1000);
    demo_gyro_turn(1000, -85, 0);
    msleep(1000);
    
    // square up, open claw, and get #3 pool noodle grabbed. Go forward and turn to poll
    demo_gyro_square_up(1200);
     msleep(100);
    demo_gyro_drive(1200,-.30);
    msleep(100);
    demo_gyro_turn(1000, 6.5, 0);
    msleep(1000);
    smart_servo(claw,85,1.5,0);
    msleep(1);
    smart_servo(elbow,110,1.7,0);
    msleep(800);
    demo_gyro_drive(1200,.75);
    msleep(100);
    smart_servo(claw,-40,1.5,0);//40
    msleep(1000);
    smart_servo(elbow,-45,1.2,0);
    msleep(1000);
    demo_gyro_drive(1200,2);
    msleep(100);
    demo_gyro_turn(1000, 70, 0);
    msleep(1000);
    
    //drive forward for yoke and back up
    demo_gyro_drive(1200,4.4);
    msleep(100);
    demo_gyro_drive(1200,-1.80);
    msleep(100);
    smart_servo(elbow,8,1.5,0);
    msleep(1000);
    demo_gyro_turn(1000, 2, 0);
    msleep(1000);
    smart_servo(claw,25,1.5,0);
    msleep(1000);
    
    //back up, turn, and square up
    demo_gyro_drive(1200,-1);
    msleep(100);
    demo_gyro_turn(1000, 100, 0);
    msleep(1000);
    demo_gyro_square_up(-1200);
    
    //midway down and drive forward
    demo_gyro_drive(1200,1);
    msleep(100);
    smart_servo(elbow,56,1.2,0);
    msleep(1000);
    smart_servo(claw,85,1.5,0);
    msleep(1000);
    demo_gyro_drive(1300,2);
    msleep(100);
    
    //claw down move rock
    smart_servo(elbow,130,1.2,0);
    msleep(1000);
    demo_gyro_drive(1200,1);
    msleep(1000);
    smart_servo(claw,-11,1.5,0);
    msleep(1000);
    demo_gyro_turn(1000, 20, 0);
    smart_servo(claw,95,1.5,0);
    msleep(1000);
    smart_servo(elbow,-45,1.5,0);
    msleep(1000);
    demo_gyro_turn(1000, -20, 0);
    smart_servo(elbow,130,1.2,0);
    msleep(1000);
    demo_gyro_drive(1200,.5);
    msleep(100);
    demo_gyro_square_up(1200);
     msleep(100);
    demo_gyro_drive(1200,3.5);
    msleep(100);
    demo_gyro_turn(1000, 35, -.4);
    demo_gyro_drive(1200,1.7);
    msleep(100);
    
   
    return 0;
}
