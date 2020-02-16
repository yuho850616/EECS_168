/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168/169 Lab 2
 * Description:  This program will calculate the hypotenuse.
 * Date: 09/13/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>
int main()
{
	double a=0.0;
	double b=0.0;	
		
	std::cout<<"Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.\n";
	std::cout<<"Input a value for a: ";
	std::cin>>a;
	std::cout<<"Input a value for b: ";
	std::cin>>b;

	double answer=sqrt(a*a+b*b);
	std::cout<<"The hypotenuse is : "<<answer<<'\n';
return(0);
}
	
