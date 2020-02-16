#ifndef ARRAYWRAPPERDRIVER_H
#define ARRAYWRAPPERDRIVER_H
#include <string>
#include "ArrayWrapper.h"

class ArrayWrapperDriver
{
    public:
    void run();
    ArrayWrapperDriver(std::string fileName);
    void testcopyconstructor(ArrayWrapper aw)const;
    void testassignment();
    
    
    private:
    int amount;
    ArrayWrapper aw;
};
#endif
