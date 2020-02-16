/* -----------------------------------------------------------------------------
 *
 * File Name: CircleDriver.h
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168 Lab 9
 * Description:  This program will define classes, instance variables (member variables) and implement methods.
 * Date: November 8 2017
 *
 ---------------------------------------------------------------------------- */
#include "Circle.h"
#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H

class CircleDriver
{

public:
	void run();


private:
	Circle circ1;
	Circle circ2;
	void obtainCircles();
	void printCircleInfo();
};
#endif

