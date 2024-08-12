#ifndef STRUCT_CONSTANTS
#define STRUCT_CONSTANTS
#include <kipr/wombat.h>

#define gyro_axis_up_down()      (gyro_z())
#define gyro_axis_left_right() 	 (gyro_x())
#define gyro_axis_forward_back() (gyro_y())

struct {
    int left,right;   
}static const motors = {
    .left = 0000,
    .right= 0001
};

struct {
    int left, right;
    int black, white, midpoint;
}static const irs = {
    .left  = 0,
    .right = 1,
    .black = 3500,
    .white = 199,
    .midpoint = 1849.5
};

typedef int intfunc();
struct {
    intfunc *l, *r, *lf, *rf;
    int black, white, midpoint;
}static const cliffs = {
    .l = get_create_lcliff,
    .r = get_create_rcliff,
    .lf = get_create_lfcliff,
    .rf = get_create_rfcliff,
    .black = 0000,
    .white = 0000,
    .midpoint = 0000
};

struct {
    int min[4], max[4];
}static const servos = {
    .min = {423,	0000,	777,	0000},
    .max = {807,	2048,	1850,	2048}
}; //ports:	 ^0		 ^1		 ^2		 ^3	

struct {
    int et, light, slider;
}static const analogs = {
    .et = 0000,
    .light = 0000,
    .slider = 0000
};

struct digital {
    int l, r, reset;
}static const digitals = {
	.l = 0000,
    .r = 0001,
    .reset = 0000
};
#endif