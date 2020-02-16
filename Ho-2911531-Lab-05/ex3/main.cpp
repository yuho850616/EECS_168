#include <fstream>
#include <iostream>

int main()
{
	

	int size=0;	
	std::ifstream inFile;
	inFile.open("input.txt");
	inFile>>size;

	double* arr = new double[size];
	

	for(int i=0; i<size; i++)
	{
		inFile>>arr[i];
	}

	
	std::cout<<"[";	
	for(int j=0; j<size; j++)
	{
		if(j==(size-1))		
		{
			std::cout<<arr[j]<<"]\n";			
		}
		else
		{
			std::cout<<arr[j]<<", ";
			
		}		
	}
	

	return(0);
}
