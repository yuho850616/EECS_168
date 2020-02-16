/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will cast a character to an int
 * Date: 09/13/2017
 *
 ---------------------------------------------------------------------------- */

#include<iostream>
int main()
{
	char x;
	std::cout<<"Input a character: ";
	std::cin>>x;
	std::cout<<"The ASCII value for '"<<x<<"' is: "<<(int) x<<"\n";
	std::cout<<"Goodbye!\n";
return(0);
}

