#include "DriversLicenseRecord.h"
#include <iostream>
#include <string>
#ifndef DMV_H
#define DMV_H

class DMV
{
	public:	
	DMV(std::string fileName);
	~DMV();
	void run();
	
	

	

	
	private:
	int m_size;
	DriversLicenseRecord**m_arrDMV;

};
#endif
