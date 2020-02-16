#include<iostream>
#include<fstream>
#include <string>
#include "DriversLicenseRecord.h"
#include "DMV.h"



	
void DMV::run()
{
	int choice = 0;
	while( choice!=5)
	{
		std::cout <<"Select an option:\n";
		std::cout<<"1) Print all Drivers Info\n";
		std::cout<<"2) Print all voters Info\n";
		std::cout<<"3) Print specific driver\n";
		std::cout<<"4) Create registered voter file\n";
		std::cout<<"5) Quit\n";
		std::cout<<"Enter your choice: ";
		std::cin >> choice;
		if(choice==1)
		{
			for(int i=0; i<m_size; i++)
			{
				std::cout<<m_arrDMV[i]->getlastname()<<", "<<m_arrDMV[i] ->getfirstname()<<" ("<<m_arrDMV[i]->getage()<<"): "<<m_arrDMV[i]->getlicensenumber() << "\n";
			}
		}
		else if (choice==2)
		{
	
			for(int i=0; i<m_size; i++)
			{
			
				if(m_arrDMV[i]->getvoter()=='Y')
				{
					std::cout<<m_arrDMV[i]->getlastname()<<", "<<m_arrDMV[i] ->getfirstname()<<" ("<<m_arrDMV[i]->getage()<<"): "<<m_arrDMV[i]->getlicensenumber()<<"\n";
				}
			}
		}
		else if (choice==3)
		{
			int num=0;
			std::cout<<"Please enter driver's license number: ";
			std::cin>>num;
			bool correct=true;
			for(int i=0; i<m_size; i++)
			{
				if(num == m_arrDMV[i]->getlicensenumber())
				{
					std::cout<<m_arrDMV[i]->getlastname()<<", "<<m_arrDMV[i]->getfirstname()<<" ("<<m_arrDMV[i]->getage()<<"): "<<m_arrDMV[i]->getlicensenumber()<<"\n";
					correct=false;
								
				}
			}
				if(correct == true)
				{
					std::cout<<"No record found. \n";
				}
			
			
		}
		else if (choice==4)
		{
			int count = 0;
			for(int i=0; i<m_size; i++)
			{
			
				if(m_arrDMV[i]->getvoter()=='Y')
				{
					count++;
				}
			}
			std::string Filename=" ";
			std::cout<<"Please enter a file name you want to save: ";
			std::cin>> Filename;
			std::ofstream outFile;
			outFile.open(Filename);
			outFile<<count<<"\n";	
			for(int i=0; i<m_size; i++)
			{
				
				if(m_arrDMV[i]->getvoter()=='Y')
				{
					outFile<<m_arrDMV[i]->getfirstname()<<" "<<m_arrDMV[i]->getlastname()<<" "<<m_arrDMV[i]->getage()<<" "<<m_arrDMV[i]->getvoter()<<" "<<m_arrDMV[i]->getlicensenumber()<<"\n";			
						
				}
			}
					
			outFile.close();
		
		}
		else if(choice>5||choice<0)
		{
			std::cout<<"Please enter the valid choice!!\n";
		}
	}

	
}

DMV::DMV(std::string fileName)
{
	std::string firstname;
	std::string lastname;	
	int age;
	char voter;
	int licensenumber;	
	std::ifstream in;
	in.open(fileName);
	in >> m_size;
	m_arrDMV= new DriversLicenseRecord*[m_size];
	
	
		for(int i=0; i<m_size; i++)
		{
			in >> firstname;
			in >> lastname;
			in >> age;
			in >> voter;
			in >> licensenumber;
		
			m_arrDMV[i]=new DriversLicenseRecord();
			m_arrDMV[i]->setfirstname(firstname);
			m_arrDMV[i]->setlastname(lastname);
			m_arrDMV[i]->setage(age);
			m_arrDMV[i]->setvoter(voter);
			m_arrDMV[i]->setlicensenumber(licensenumber);
		}
	
	
	
}
DMV::~DMV()
{
	for(int i=0; i<m_size; i++)
	{
		delete m_arrDMV[i];
	}
	delete[]m_arrDMV;
}
			
