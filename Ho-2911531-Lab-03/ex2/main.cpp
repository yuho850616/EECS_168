/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168/169 Lab 2
 * Description:  This program will show the fibonacci sequence.
 * Date: 09/20/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
	int n;
	int first=0;
	int second=1;
	int third;

	std::cout<<"How many fibonacci numbers would you like to see?\n";
	std::cin>>n;
	std::cout<<"Here is your fibonacci sequence:\n";
	for(int i=0; i<n; i++)
	{
		if(i<=1)
		{
			third= i;
		}		
		else
		{
			third=(first +second);
			first=second;
			second=third;
		}
		std::cout<<third<<std::endl;
	}
return(0);
}
