#include <fstream>
#include <iostream>

int main()
{
	

	double max=0.0;
	double min=0.0;	
	int size=0;	
	std::ifstream inFile;
	inFile.open("input.txt");
	inFile>>size;

	double* arr = new double[size];
	

	for(int i=0; i<size; i++)
	{
		inFile>>arr[i];
	}

	
	std::cout<<"The Original array: [";
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
	
	 max = arr[0];
    	 min = arr[0];

    std::cout<<"Normalized array: [";
    for(int i=0; i<size; i++)
    {
        
        if(max < arr[i])
        {
            max = arr[i];
        }
        else if(min > arr[i])
        {
            min = arr[i];
        }
   	
    }

    for(int i=0; i<size; i++)
    {
	if(i==(size-1))
	{
		std::cout<<(arr[i]-min)/(max-min)<<"]\n";
    	}
	else
	{
		std::cout<<(arr[i]-min)/(max-min)<<", ";
	}
     }
	

	std::cout<<"The Reversed array: ["; 	
	for(int i=(size-1); i>=0 ; i--)
	{
		if(i==0)		
		{
			std::cout<<arr[i]<<"]\n";			
		}
		else
		{
			std::cout<<arr[i]<<", ";
			
		}		
	}
	

	return(0);
}
