#include"ArrayWrapperDriver.h"
#include"ArrayWrapper.h"
#include<fstream>
#include<iostream>
#include<string>

ArrayWrapperDriver::ArrayWrapperDriver(std::string fileName):aw{1}
{
    std::ifstream inFile;
    inFile.open(fileName);
    if(inFile.is_open())
    {
        inFile>>amount;
        if(amount>0)
        {
            ArrayWrapper awd(amount);
            aw=awd;
            for(int i=0;i<amount;i++)
            {
                double newValue;
                inFile >>newValue;
                aw.setEntry(i,newValue);
            }
        }
        else if(amount<0)
        {
            std::cout<<"Can't input the file. Amount should be bigger than 0";
        }
    }
            
}
void ArrayWrapperDriver::run()
{
    int choice=0;
    bool stop=true;
    while(stop==true)
    {
        std::cout<<"1)Exit\n";
        std::cout<<"2)Set value\n";
        std::cout<<"3)Get value\n";
        std::cout<<"4)Test Copy Constructor\n";
        std::cout<<"5)Test Assignment\n";
        std::cout<<"6)Print\n";
        std::cout<<"Please input your choice: ";
        std::cin>>choice;
        
        if(choice==1)
        {
            stop=false;
        }
        
        else if(choice==2)
        {
            double value=0;
            int index=0;
            std::cout<<"Please input value: ";
            std::cin>>value;
            bool stop=true;
            while(stop==true)
            {
                std::cout<<"Please input index: ";
                std::cin>>index;
                try
                {
                    aw.setEntry(index, value);
                    stop=false;
                }
                catch(std::runtime_error&rte)
                {
                    std::cout<<rte.what()<<"\n";
                }
            }
        }
        
        else if(choice ==3)
        {
            int index1;
            bool stop=true;
            while(stop==true)
            {
                std::cout<<"Please input index: ";
                std::cin>>index1;
                try
                {
                    std::cout<<"The value at index["<<index1<<"] is "<<aw.getEntry(index1)<<'\n';
                    stop=false;
                }
                catch=
                {
                    std::cout<<rte.what()<<"\n";
                }
            }
        }
        
        else if(choice==4)
        {
            testcopyconstructor(aw);
        }
        else if(choice==5)
        {
            testassignment();
        }
        else if(choice==6)
        {
            std::cout<<"Here is your array so far\n";
            int arrSize=aw.getSize();
            for(int i=0; i<arrSize;i++)
            {
                if(i==(arrSize-1))
                {
                    std::cout<<aw.getEntry(i)<<"\n";
                }
                else
                {
                    std::cout<<aw.getEntry(i)<<", ";
                }
	     }	
        }
       
        else
        {
            std::cout<<"Wrong choice. Please choose between 1-6\n";
        }
    }
}



void ArrayWrapperDriver::testcopyconstructor(ArrayWrapper aw)const
{
    ArrayWrapper arraycopy(aw);
    arraycopy.setEntry(0,-1);
    arraycopy.setEntry(arraycopy.getSize()-1,-1);
    
    for(int i=0;i<arraycopy.getSize();i++)
    {
        if(i==(arraycopy.getSize()-1))
        {
            std::cout<<arraycopy.getEntry(i)<<"\n";
        }
        else
        {
            std::cout<<arraycopy.getEntry(i)<<", ";
        }
    }
}

void ArrayWrapperDriver::testassignment()
{
    int arraysize=0;
    bool stop =true;
    while(stop==true)
    {
        std::cout<<"Please input the size of the array: ";
        std::cin>>arraysize;
        if(arraysize<=0)
        {
            std::cout<<"Size need to bigger than 0"<<"\n";
        }
        else
        {
            stop=false;
        }
    }
    ArrayWrapper AW(arraysize);
    for(int i=0; i<arraysize; i++)
    {
        double value=0;
        std::cout<<"Please enter value for index["<<i<<"] : ";
        std::cin>>value;
        AW.setEntry(i,value);
    }
    aw=AW;
}

