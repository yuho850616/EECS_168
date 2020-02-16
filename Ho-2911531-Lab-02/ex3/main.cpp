/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will create a program that solves the quadratic equation. 
 * Date: 09/13/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main ()
{
	double a=0.0 ;
	double b=0.0 ;
	double c=0.0 ;
	std::cout<<"Input a: " ;
	std::cin>>a;
	std::cout<<"Input b: " ;
	std::cin>>b;
	std::cout<<"Input c: " ;
	std::cin>>c;
	std::cout<<"root 1: "<<(-b+sqrt(b*b-4*a*c))/(2*a)<<'\n';
	std::cout<<"root 2: "<<(-b-sqrt(b*b-4*a*c))/(2*a)<<'\n';

return(0);
}

