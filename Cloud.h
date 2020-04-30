#pragma once

class Cloud //class with 4 private variables, 2 constructors (one with variables, another empty) and 5 public methods
{
	double width;
	double y;
	double speed;
	double x;

public:
	Cloud();
	Cloud(double width, double y, double speed, double x);

	double getWidth();
	double getY();
	double getSpeed();
	double getX();
	void toModelMinute();

};
