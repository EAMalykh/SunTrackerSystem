#include "Sun.h"

//	radius - metre
//	angle - radian

Sun::Sun() { // the angle in the beginning is 0
	this->angle = 0;
}


double Sun::getAngle() { //returns the current  angle of the sun
	return this->angle;
}


// Sun goes 12 hours
void Sun::toModelMinute() { //counting the angle of the sun for the next minute
	this->angle += 3.14159 / (12 * 60); // 180 angles (PI) per 12*60 minutes
}