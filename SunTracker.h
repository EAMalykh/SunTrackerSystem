#pragma once

#include "Sun.h"
#include "Cloud.h"

class SunTracker /*the class with 2 private variaables and 2 private methods; constructor with 4 variables and 2 public methods */ 
{
	Sun sun;
	Cloud cloud;

	double getAlphaAngle();
	double getBetaAngle();

public:

	SunTracker(double cloud_width, double cloud_y, double cloud_speed, double cloud_x);

	bool isDangerous();
	void toModelMinute();

};

