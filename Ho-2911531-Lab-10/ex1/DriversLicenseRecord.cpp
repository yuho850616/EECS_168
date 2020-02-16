#include "DriversLicenseRecord.h"
#include <iostream>


void DriversLicenseRecord::setfirstname(std::string f)
{
	firstname = f;
}
std::string DriversLicenseRecord::getfirstname()
{
	return(firstname);
}

void DriversLicenseRecord::setlastname(std::string l)
{
	lastname = l;
}
std::string DriversLicenseRecord::getlastname()
{
	return(lastname);
}

void DriversLicenseRecord::setage(int a)
{
	age = a;
}

int DriversLicenseRecord::getage()
{
	return(age);
}
void DriversLicenseRecord::setvoter(char v)
{
	voter = v;
}

char DriversLicenseRecord::getvoter()
{
	return(voter);
}

int DriversLicenseRecord::getlicensenumber()
{
	return(licensenumber);
}

void DriversLicenseRecord::setlicensenumber(int n)
{
	licensenumber = n ;
}

