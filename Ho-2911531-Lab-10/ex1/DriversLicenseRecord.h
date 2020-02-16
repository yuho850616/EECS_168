#ifndef DRIVERSLICENSERECORD_H
#define DRIVERSLICENSERECORD_H
#include <string>
#include <iostream>

class DriversLicenseRecord
{
	public:

	std::string getfirstname();
	void setfirstname(std::string f);
	std::string getlastname();
	void setlastname(std::string l);
	int getage();
	void setage(int a);
	char getvoter();
	void setvoter(char v);
	int getlicensenumber();
	void setlicensenumber(int n);
	
	

	
	private:

	std::string firstname;	
	std::string lastname;
	int age;
	char voter;
	int licensenumber;
	
};
#endif 	
