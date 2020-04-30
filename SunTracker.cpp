#include "SunTracker.h"
#include "Sun.h"
#include "Cloud.h"

#include <math.h>


SunTracker::SunTracker(double cloud_width, double cloud_y, double cloud_speed, double cloud_x) /*description for the constructor
{
	this->sun = Sun();
	this->cloud = Cloud(cloud_width, cloud_y, cloud_speed, cloud_x);
}


double SunTracker::getAlphaAngle() 
{
	double currentX = cloud.getX(); //current coordinate X of the cloud
	double currentY = cloud.getY(); //current coordinate Y

	double alpha = atan(currentY / currentX); // the angle, going beside the cloud on the right

	alpha = (alpha < 0) ? -alpha : alpha; //checking the existance of the arctan

	return alpha;
}


double SunTracker::getBetaAngle()
{
	double currentX = cloud.getX(); //current coordinates X and Y
	double currentY = cloud.getY();
	double width = cloud.getWidth(); 

	double beta = atan(currentY / (currentX - width)); //the angle going beside the cloud on the left
	beta = (beta < 0) ? -beta : beta;

	return beta;
}


bool SunTracker::isDangerous() //переопределение метода, проверка на опасность
{
	return (sun.getAngle() > getAlphaAngle()) && (sun.getAngle() < getBetaAngle()); /*checking the position of the sun, if its angle is
in the range between alfa and beta, the situation is dangerous*/
}


void SunTracker::toModelMinute() //modelling the next minute
{
	sun.toModelMinute();
	cloud.toModelMinute();
}


