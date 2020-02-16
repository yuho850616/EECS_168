/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168/169 Lab 8
 * Description:  This program will count the number of crosses
 * Date: 11/01/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char *argv[] )
{
	int rows = 0;  //first number in file represents rows  
	int cols;  //second one means cols	
	int count=0;
	std:: string filename=argv[1];	
	std::ifstream inFile(filename);
	inFile>>rows; //read the length of rows
	inFile>>cols; //read the length of cols
	char** arr = new char*[rows]; 
	for(int i=0; i<rows; i++)
	{
		arr[i]= new char [cols];
	}
	for(int i = 0; i<rows; i++)
	{
		arr[i] = new char[cols]; //assign one pointer to look at an array of char.
		for(int j=0; j<cols; j++)
		{
			inFile>>arr[i][j];
		}	
	
	}

	inFile.close();

	for(int i=1; i<rows-1;i++)
	{
  		for(int j=1; j<cols-1;j++)
  		{
    			if((arr[i][j]=='+')&&(arr[i][j+1]=='+')&&(arr[i][j-1]=='+')&&(arr[i+1][j]=='+')&&(arr[i-1][j]=='+'))
       			{
        			count++;
					
       			}
 		 }
	}
   
	std::cout<<filename<<" contains "<<count<<" crosses.\n";
   	std::cout<<"Location(s) of center(s):\n";
	for(int i=1; i<rows-1;i++)
	{
 		 for(int j=1; j<cols-1;j++)
  		 {
    			if((arr[i][j]=='+') && (arr[i-1][j]=='+') && (arr[i][j-1]=='+') && (arr[i][j+1]=='+') && (arr[i+1][j]=='+'))
       			{
      				std::cout<<"("<<i<<","<<j<<")\n";
     			}
  		 }
	}
	for(int i=0;i<rows;i++)
	{
    		delete[] arr[i];
	}
	
delete[] arr;
return(0);
}

