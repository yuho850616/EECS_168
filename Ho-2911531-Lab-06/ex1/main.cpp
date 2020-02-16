/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 6
 * Description:  This program will  create an array manipulation program that allows the user to do pretty much whatever they want to an array. 
 * Date: 10/11/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

int* insert(int arr[], int size, int value, int position);
int* remove(int arr[], int size, int position);
int count(int arr[], int size, int num);
void print(int arr[], int size);


int main()
{
	
	int size;
	char choice;
	int position;
	int value;
	int num;
	int* arr = nullptr; //not referring to an array yet	
	std::cout<<"Input an array size for your numbers array: ";
 	std::cin>>size;
	arr = new int[size]; // get a new array size
	std::cout<<"Now please enter "<<size<<" numbers"<<"\n";
	for(int i = 0; i<size; i++) 
	{
		std::cout<<"Input a number: ";
		std::cin>>arr[i];
	}
		
	do 	
	{
		std::cout<<"Make a selection: "<<"\n";
		std::cout<<"1) Insert"<<"\n";
		std::cout<<"2) Remove"<<"\n";
		std::cout<<"3) Count"<<"\n";
		std::cout<<"4) Print"<<"\n";
		std::cout<<"5) Exit"<<"\n";	
		std::cout<<"Choice: ";
		std::cin>>choice;

		
		if(choice=='1')
		{
			
			while (true)
			{
				std::cout<<"Enter a position: ";
				std::cin>>position;
				if(position>size+1||position<1)
				{
					std::cout<<"This is a invalid position. \n";
				}
				else
				{
					std::cout<<"What value do you want to plug in : ";
					std::cin>>value;
					arr=insert(arr, size, value, position-1);
					size++; //insert so the array size need to +1
					break;
				}
			}
		}

		if(choice=='2')
		{
			while(true)
			{
			 	std::cout<<"What position do you want to remove a value : ";
    				std::cin>>position;
				if(position>size||position<1)
				{
					std::cout<<"This is a invalid position\n";
				}
				else
				{
   					arr=remove (arr, size, position-1); 
					size--; //remove so the array size need to -1
					break;
				}
			}	
    			
    		}

		if(choice=='3')
		{
			std::cout<<"Which number do you want to count in the array: ";
			std::cin>>num; 
    			std::cout<<num<<" shows "<<count(arr, size, num)<< " times.\n";	
		}
		if(choice=='4')
		{
			print(arr, size);
		}
		if(choice=='5')
	        {  	
			break;
		}
		
	}while(choice != '5'); //if user doesnt hit the exit, it will go back to menu.
	
	delete[]arr;
	
		return(0);
	}


int* insert(int arr[], int size, int value, int position)
{
	int* arrayPointer1=nullptr;
	arrayPointer1=new int[size+1];

	for(int i=0; i<size+1; i++)
        {
		if(i<position)
		{
			arrayPointer1[i]=arr[i];
		}
		else if(i>position)
		{
			arrayPointer1[i]=arr[i-1];
		}
		else if(i == position)
		{
			arrayPointer1[i]=value;
		}	
	}

	
	
	delete[]arr; //we can't change array size, so delete and make a new one.
	return(arrayPointer1);
}	

//put array functions out of main()


int* remove(int arr[], int size, int position)
{
	int* arrayPointer2=nullptr;
	arrayPointer2=new int[size-1];

	
	for(int i=0; i<size-1; i++)
    	{
   		if(i<position)
		{
			arrayPointer2[i]=arr[i];
		}
		else if(i>=position)
		{
			arrayPointer2[i]=arr[i+1];
		}
		
	}
delete[]arr;
return (arrayPointer2);

}




int count(int arr[], int size, int num)
{
	int count=0;
	for(int i=0; i<size; i++)
	{
 		if(arr[i]==num) //the number in array= input
    		{
    			count++;
    		}
	}
delete[]arr;
return(count);

}




void print(int arr[], int size)
{
	std::cout<<" [";
    	for(int i=0; i<size; i++)
    	{
		if(i==(size-1))
		{
			std::cout<<arr[i]<<"]\n";
		}
		else
		{
    			std::cout<<arr[i]<<", ";
		}
	}
}


   
		
		
