/* -----------------------------------------------------------------------------
 *
 * File Name: CircleDriver.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168 Lab 9
 * Description:  This program will define classes, instance variables (member variables) and implement methods.
 * Date: November 8 2017
 *
 ---------------------------------------------------------------------------- */
#include<math.h>
#include "Circle.h"
#include "CircleDriver.h"
#include <iostream>

void CircleDriver::run()
{
	obtainCircles();
	printCircleInfo();
}
void CircleDriver::obtainCircles()
{
	double xPos1 = 0.0;
	double yPos1 = 0.0;
	double xPos2 = 0.0;
	double yPos2 = 0.0;
	double radius1 = 0.0;
	double radius2 = 0.0;	
	
	std::cout << "Please choose the x position for circle 1: ";
	std::cin >> xPos1;
	circ1.setX(xPos1);

	std::cout << "Please choose the y position for circle 1: ";
	std::cin >> yPos1;
	circ1.setY(yPos1);
		
	do
	{
		std::cout << "Please input a number for circle 1 radius: ";
		std::cin >> radius1;
		circ1.setRadius(radius1);

	}while(circ1.setRadius(radius1) == false);
	
		

	std::cout<< "Please choose the x poistion for circle 2: ";
	std::cin>> xPos2;
	circ2.setX(xPos2);

	std::cout<< "Please choose the y position for circle 2: ";
	std::cin>> yPos2;
	circ2.setY(yPos2);

	do
	{
		std::cout << "Please input a number for circle 2 radius: ";
		std::cin >> radius2;
		circ2.setRadius(radius2);
	
	}while(circ2.setRadius(radius2) == false);
	
}

void CircleDriver::printCircleInfo()
{
	std::cout << "\nInformation for circle 1: \n";
	std::cout << "location: (" << circ1.getX() << ", " << circ1.getY() << ")\n";
	std::cout << "diameter: " << circ1.diameter() << "\n";
	std::cout << "area: " << circ1.area() << "\n";
	std::cout << "circumference: " << circ1.circumference() << "\n";
	std::cout << "distance from the origin: " << circ1.distanceToOrigin() << "\n\n";



	std::cout << "Information for circle 2: \n";
	std::cout << "location: (" << circ2.getX() << ", " << circ2.getY() << ")\n";//circ1.getY()->2
	std::cout << "diameter: " << circ2.diameter() << "\n";
	std::cout << "area: " << circ2.area() << "\n";
	std::cout << "circumference: " << circ2.circumference() << "\n";
	std::cout << "distance from the origin: " << circ2.distanceToOrigin() << "\n\n";
	circ1.intersect(circ2);

}
