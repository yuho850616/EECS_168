#include<iostream>
#include"ArrayWrapper.h"
#include"ArrayWrapperDriver.h"
#include<string>
int main(int argc, char** argv)
{
    std::string fileName;
    if( argc > 1 )
    {
        fileName = argv[1];
        ArrayWrapperDriver awd(fileName);
        awd.run();
    }

return (0);
}
