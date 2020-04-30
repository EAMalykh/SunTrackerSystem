#include <math.h>

#include "Cloud.h"

//	width - metre
//	y - metre
//	speed - metre / minutes
//	x - metre

Cloud::Cloud() { //description of the methods, all of the features of the cloud are 0
	this->width = 0;
	this->y = 0;
	this->speed = 0;
	this->x = 0;
}



Cloud::Cloud(double width, double y, double speed, double x) { /*the features are prinnted by the user*/
	this->width = width;
	this->y = y;
	this->speed = speed;
	this->x = x;
}


double Cloud::getWidth() { //returns the width of the cloud
	return this->width;
}


double Cloud::getX() { //returns current X
	return this->x;
}


double Cloud::getY() { //returns Y
	return this->y;
}


double Cloud::getSpeed() { //returns the speed
	return this->speed;
}


void Cloud::toModelMinute() { returns X of the next minute
	this->x += this->speed;
}


