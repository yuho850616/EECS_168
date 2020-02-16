/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 5
 * Description:  This program will create an array of 5 doubles
 * Date: 10/04/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
    const int SIZE= 5;
    double nums[SIZE];
    double sum = 0.0;
    double average = 0.0;
    double max = 0.0;
    double min = 0.0;
    int i = 0;
    int j = 0;

    

    

    
    std::cout<<"Please enter 5 numbers \n";

    
    for(i=0; i<5; i++)

        
    {
        std::cout<<"Input a number into your array: ";
        std::cin>>nums[i];
    }

    

    
    std::cout<<"Here are all the numbers in your arrays\n";

    
    for(i=0; i<5; i++)
    {
        std::cout<<nums[i]<<"\n";
    }

    

    
    for(j=0; j<SIZE; j++)
    {
        sum=sum+nums[j];
    }

    
    std::cout<<"The sum of all the values is: "<<sum<<"\n";

    
    average=(sum/SIZE);
    std::cout<<"The average of all the values is: "<<average<<"\n";

    
    max = nums[0];
    min = nums[0];

    
    for(int i=0; i<SIZE; i++)
    {
        //		cout << array[i] << "\n";
        if(max < nums[i])
        {
            max = nums[i];
        }
        else if(min > nums[i])
        {
            min = nums[i];
        }
    }

    
    std::cout<<"The largest value is : "<<max<<"\n";
    std::cout<<"The smallest value is : "<<min<<"\n";

    
    return(0);
}
