/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 5
 * Description:  This program will create an array of strings
 * Date: 10/04/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
int main()
{
    int userSize = 0;
    std::string input;
    std::string shortest;
    std::string longest;
    std::cout << "Input an array size for you words array: ";
    std::cin >> userSize;
    std::string* nums = nullptr; //not referring to an array yet
    nums = new std::string[userSize];
    std::cout<<"Now please enter "<<userSize<<" words"<<"\n";

    

    
    for(int i = 0; i<userSize; i++)
    {
        std::cout<<"Input a word: ";
        std::cin>>nums[i];
    }

    
    longest=nums[0];
    shortest=nums[0];

    
    for(int i =0; i<userSize; i++)
    {
        if(nums[i].length()>longest.length())
        {
            longest=nums[i];
        }
        else if(nums[i].length()<shortest.length())
        {
            shortest=nums[i];
        }
    }

    
    std::cout<<"The longest word is "<<longest<<"\n";
    std::cout<<"The shortest word is "<<shortest<<"\n";

    
    return(0);
}
