/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168/169 Lab 2
 * Description:  This program will verify the fibonacci number.
 * Date: 09/20/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
	int value;
	int first=0;
	int second=1;
	int third=0;
	int count=2;

	std::cout<<"Enter a value: ";
	std::cin>>value;

	if(value>1)
	{
	
	
		while(third<value)
		{	
			third=(first +second);
			first=second;
			second=third;
			count=count+1;
		}
			
		if(third==value)
		{
			std::cout<<value<<" is the "<<count<<"th value in the Fibonacci Sequence!\n";
			std::cout<<"Goodbye\n";
		}
		else if(third!=value)
		{
			std::cout<<value<<" in not in the Fibonacci Sequence!\n";
			std::cout<<"Goodbye\n";
		}
	}
	if(value==0)
	{
		std::cout<<value<<" is the 1st value in the Fibonacci Sequence!\n";
		std::cout<<"Goodbye\n";
	}	
		
	
	else if(value==1)
	{
		std::cout<<value<<" is the 2nd and 3rd values in the Fibonacci Sequence!\n";
		std::cout<<"Goodbye\n";
	}
	

return(0);
}
