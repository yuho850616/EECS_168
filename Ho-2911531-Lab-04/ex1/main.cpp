/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will make the user guess a random number between 1 and 100 (inclusive)
 * Date: Sep 27 2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{

   
    char answer;
    do
    {
        int close=0;// The closet number to the random number 
        int num=0; // The random number 
        int guess=0; // The number user input
        int tries=1; // To count how many times user try 
        std::cout<<"Welcome to the number guessing game.\n";
        srand( time(NULL));
        num=rand()%100+1;
        do
        {
            std::cout<<"Guess a number: ";
            std::cin>>guess;

            
            if(num<guess)
            {
                std::cout<<"Sorry, your guess is too high.\n";
                tries=tries+1; //count how many times user try
            }

            
            else if(num>guess)
            {
                std::cout<<"Sorry, your guess is too low.\n";
                tries=tries+1; //count how many times user try
            }
            else if(num==guess)
            {
                std::cout<<"You win!\n";
                break;
            }
            if(abs(num-close)>=abs(num-guess))
            {
                close=guess; //To get closest number.
            }

            
        }while (guess!=num);
        std::cout<<"You guess the secret number after "<<tries<< " guesses\n";
        std::cout<<"Your closest number was "<<close<<"\n";
        std::cout<<"Would you like to play again? (y/n): ";
        std::cin>>answer;

        

        
    }while(answer=='y'||answer=='Y'); //If some character no equal to y. will quit.

    

    
    return(0);
}
