/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will print a triangle of asterisks of size n, called Pyramid.
 * Date: Sep 27 2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
using namespace std;
int main()
{
	int row;
	std::cout<<"Enter the number of asterisks for the base of the triangle: ";
        std::cin>>row;

	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}	
	return(0);
}
