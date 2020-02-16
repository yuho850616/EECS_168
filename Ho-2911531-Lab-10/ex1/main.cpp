/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab-10
 * Description:  This program will ads in Drivers License Records from file and then let the user interact with the data. 
 * Date: 11/15/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "DriversLicenseRecord.h"
#include "DMV.h"
#include <string>
#include <fstream>


int main(int argc, char** argv)
{
	std::string fileName;
	fileName=argv[1];
	std::ifstream in;
	in.open(fileName);
	DMV myDMV(fileName);
	if(in.is_open()&&argc>1)
	{
		myDMV.run();
	}
	else
	{	
		std::cout<<"File doesn't exist. Please try the file which exists!\n";
	}
		


	

return(0);  
}
