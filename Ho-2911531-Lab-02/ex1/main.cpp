/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168/169 Lab 2
 * Description:  This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: 09/13/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
	double temp;	
	std::cout<<"Enter the temperature in Fahrenheit: ";
	std::cin>>temp;
	std::cout<<temp<<" degrees Fahrenheit = "<<(temp-32)*(5.0/9.0)<<"degrees Celsius.\n";
return(0);
}


