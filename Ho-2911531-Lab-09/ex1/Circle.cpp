/* -----------------------------------------------------------------------------
 *
 * File Name: Circle.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168 Lab 9
 * Description:  This program will define classes, instance variables (member variables) and implement methods.
 * Date: November 8 2017
 *
 ---------------------------------------------------------------------------- */
#include "Circle.h"
#include <math.h>
#include <iostream>

double Circle::diameter()
{
	return(2 * radius);
}

double Circle::area()
{
	return(PI*radius*radius);
}

double Circle::circumference()
{
	return(PI * 2 * radius);
}

double Circle::getRadius()
{
	return(radius);
}

double Circle::getX()
{
	return(xPos);
}

double Circle::getY()
{
	return(yPos);
}

void Circle::setX(double x)
{
	xPos = x;
}

void Circle::setY(double y)
{
	yPos = y;
}

double Circle::distanceToOrigin()
{
	return(sqrt(xPos*xPos + yPos*yPos));
}

bool Circle::intersect(const Circle & otherCircle)
{

	if ((radius + otherCircle.radius) >= sqrt((xPos - otherCircle.xPos)*(xPos - otherCircle.xPos) + (yPos - otherCircle.yPos)*(yPos - otherCircle.yPos)))
	{
		std::cout << "The circles intersect. \n";
		return(true);
	}

	else
	{
		std::cout << "The circles don't intersect.\n";
		return(false);
	}
}

bool Circle::setRadius(double r)
{
	if (r>0)
	{
		radius = r;
		return(true);
	}
	else
	{
		return(false);
	}

}
