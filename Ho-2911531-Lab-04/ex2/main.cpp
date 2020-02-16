/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will require the user to guess a secret word.
 * Date: Sep 27 2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
int main()
{
	
	char choice;
	do
	{	
	
	std::string guess;	
	std::string word;
	word="valentine";
	std::cout<<"Welcome to the word guessing game.\n";
 	std::cout<<"Guess a word: ";
	int right;
	std::cin>>guess;

		
	
	
		while(guess != word)
		{
		
			if(guess.length() < word.length())
			{
				std::cout<<"The word is longer\n";
				std::cout<<"Incorrect. Guess again: ";
				std::cin>>guess;
				
			}
			else if(guess.length() > word.length())
			{
				std::cout<<"The word is shorter\n";
				std::cout<<"Incorrect. Guess again: ";
				std::cin>>guess;
			}
			else if(guess.length() == word.length())
			{
			        right=0;
				for(int i=0; i<8; i++)
				{
					
					if(guess.at(i)==word.at(i))
					{

						right++;
					}
				}
	
				std::cout<<"You have "<<right<<" letters correct\n";
				std::cout<<"Incorrect. Guess again: ";
				std::cin>>guess;
			}
					
			
				
		}
	
	std::cout<<"You win!\n";      
	std::cout<<"Would you like to play again? (y/n): ";
	std::cin>>choice;
      

	}while(choice=='Y'||choice=='y');
	
	
		 
return(0);
}
