/* -----------------------------------------------------------------------------
 *
 * File Name: Circle.h
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168 Lab 9
 * Description:  This program will define classes, instance variables (member variables) and implement methods.
 * Date: November 8 2017
 *
 ---------------------------------------------------------------------------- */
#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES
#include<math.h>

class Circle
{
public:
	
	double diameter();
	double area();
	double circumference();
	double getRadius();
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);
	double distanceToOrigin();
	bool intersect(const Circle & otherCircle);
	bool setRadius(double r);

private:
	double radius;
	double xPos;
	double yPos;
	const double PI = M_PI;
};
#endif
