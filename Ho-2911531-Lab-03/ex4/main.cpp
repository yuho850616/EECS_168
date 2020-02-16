/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will detect the prime number.
 * Date: 09/20/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
    int n=0;
    char c = 'a';

    
    while(c!='y')
    {
	int x=1;
    	std::cout<<"Input an integer: ";
    	std::cin>>n;

    

    
            if(n==1)
            {
                std::cout<<"1 is not prime\n";
                std::cout<<"Do you want to quit (y/n): ";
                std::cin>>c;
            }
            for(int i=2; i<n; i++)
            {
                if(n%i!=0)
                {
                    continue;
                }
                else
                {
                    x=0;
                }
            }
            if(x==0)
            {
                std::cout<<n<<" is not prime\n";
                std::cout<<"Do you want to quit (y/n) ";
                std::cin>>c;
            }
            else
            {
                std::cout<<n<<" is prime\n";
                std::cout<<"Do you want to quit (y/n) ";
                std::cin>>c;
            }

    

    

    
        }

    
    	std::cout<<"Goodbye\n";
        return(0);
        }
	
