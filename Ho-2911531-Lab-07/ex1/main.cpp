/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho 
 * Assignment:   EECS-168/169 Lab 7
 * Description:  This program will implement 2D array in this code
 * Date: 10/25/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <fstream>
#include <string>

void print2DArray(int** array, int rows, int cols); 
int arraySum(int* array, int size);
double arrayAvg(int* array, int size);
int arraySum2D(int** array, int rows, int cols);
double arrayAvg2D(int** array, int rows, int cols);
int arrayMax2D(int** array, int rows, int cols);
int** arrayFromFile(std::string filename, int& numRows, int& numCols);
void transpose(int** array, int rows, int cols);

int main(int argc, char*argv[])
{
	
	
	int rows=0;
	int cols=0;
	std::string file=argv[1];	
	int** grid = arrayFromFile(file, rows, cols);
	print2DArray(grid, rows, cols);
	
	for(int i=0; i<rows; i++)
	{
		double average=0;
		average = arrayAvg(grid[i], cols);
		std::cout<<"row "<<i<< " sum= "<<arraySum(grid[i], cols)<<", "<<"avg = "<<average<<'\n';
	}
	
	std::cout <<"The largest value in the array is = "<<arrayMax2D(grid, rows, cols)<<'\n';
	std::cout <<"The sum for the entire array is = "<<arraySum2D(grid, rows, cols)<<'\n';
	double average2D = 0;
	average2D= arrayAvg2D(grid, rows, cols);
	std::cout <<"The average for the entire array is = "<<average2D<<'\n';
	if(rows==cols)
	{
		transpose(grid,rows,cols);
	}
	else
	{
		std::cout<<"Cannot transpose this array\n";
	}


	for(int i=0; i<rows; i++)
	{
    		delete[] grid[i]; 
	}

	delete[] grid;

return(0);
}



void print2DArray(int** array, int rows, int cols) 
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j< cols-1; j++)
		{
			std::cout<<array[i][j]<<" ";
		}
		std::cout<<array[i][cols-1];
		std::cout<<"\n";
	}
}


int arraySum(int* array, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum +array[i];
	}
	return(sum);
}


double arrayAvg(int* array, int size)
{
	double avg = 0.0;
	avg = arraySum(array, size)*1.0/size;
	return(avg);
}

int arraySum2D(int** array, int rows, int cols)
{
	int sum=0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			sum = sum+array[i][j];
		}
	}
	return(sum);
}
	

double arrayAvg2D(int** array, int rows, int cols)
{
	double avg = 0;
	avg=arraySum2D(array,rows,cols)*1.0/(rows*cols);
	return(avg);
}


int arrayMax2D(int** array, int rows, int cols)
{
	int largest = 0;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j<cols; j++)
		{
			if(array[i][j]>largest)
			{
				largest=array[i][j];
			}
		}
	}
	return(largest);
}
int** arrayFromFile(std::string filename, int& numRows, int& numCols)
{
	std::ifstream inFile;
	inFile.open(filename);
	inFile>>numRows;
	inFile>>numCols;
	int** grid= new int*[numRows];
	
	for(int i=0 ; i<numRows;i++)
	{
		grid[i]= new int [numCols];
	}

  	if(inFile.is_open()) 
	{
		for(int i=0; i<numRows;i++)
		{
			for(int j=0;j<numCols;j++)
			{
				inFile>>grid[i][j];
			}
		}
		std::cout<<"Here is your array\n";   
	}
	else
	{
		std::cout<<"Can't open the file\n";
	}
	
	return (grid);
}
void transpose(int** array, int rows, int cols)
{
	int** arr= new int*[rows];
	for(int i=0 ; i<rows;i++)
	{
		arr[i]= new int [cols];
	}

	for(int i=0; i<cols; i++)
	{
		for(int j=0; j<rows; j++)
		{
			arr[i][j]=array[j][i];
			std::cout<<arr[i][j];
			if(j<rows-1)
			{
				std::cout<<", ";
			}
		}
		std::cout<<"\n";
	}
}

	


