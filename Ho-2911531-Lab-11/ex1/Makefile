ex1: main.o ArrayWrapper.o ArrayWrapperDriver.o
		g++ -std=c++11 -g -Wall main.o ArrayWrapper.o ArrayWrapperDriver.o -o ex1

main.o: main.cpp ArrayWrapper.h ArrayWrapperDriver.h
		g++ -std=c++11 -g -Wall -c main.cpp

ArrayWrapper.o: ArrayWrapper.h ArrayWrapper.cpp
		g++ -std=c++11 -g -Wall -c ArrayWrapper.cpp

ArrayWrapperDriver.o: ArrayWrapperDriver.h ArrayWrapperDriver.cpp
		g++ -std=c++11 -g -Wall -c ArrayWrapperDriver.cpp

clean:
		rm *.o ex1
