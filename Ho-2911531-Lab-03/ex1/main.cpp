/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will make an ASCII program!
 * Date: September 20 2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
	int i;
	int j;
	std::cout<<"1) Select a specific number\n";
	std::cout<<"2) Display a visible ASCII values (33 to 126)\n";
	std::cout<<"3) Exit\n";
	std::cout<<"Choice: ";
	std::cin>>i;
	while(i!=3)
	{
		if(i==1)
		{
		std::cout<<"Enter Value: ";
		std::cin>>j;
		std::cout<<j<<"="<<(char)j<<"\n";
		}
		if(i==2)
		{
			std::cout<<"ASCII values (33 to 126): \n";
			for(int k=33; k<=126;k++)
			{
				std::cout<<k<<"="<<(char)k<<"\n";
			}
		}
		std::cout<<"1) Select a specific number\n";
		std::cout<<"2) Display a visible ASCII values (33 to 126)\n";
		std::cout<<"3) Exit\n";
		std::cout<<"Choice: ";
		std::cin>>i;
	}
		std::cout<<"Goodbye..."<<"\n";
return(0);
}
