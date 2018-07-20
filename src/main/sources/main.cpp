#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include <sstream>

#include <memory>

#include "Auto.h"
#include "SedanCar.h"
#include "Truck.h"

using namespace std;

int main(int argc, char **argv) {


	// Create 3 Objects
	// No deletes and no new operators are used.

	auto  myAuto  =  std::make_shared <SedanCar>();
	myAuto->setNoOfPassengers(4);
	myAuto->setTailLoad(double (101.5));

	std::cout << "Total weight of my Sedan Car is: ";
	std::cout <<  myAuto->getTotalWeight() << std::endl;



	auto  myTruck  =  std::make_shared <Truck>();
	myTruck->setNoOfPassengers(2);
	myTruck->setTailLoad(double (500.50));

	std::cout << "Total weight of my Sedan Car is: ";
	std::cout <<  myTruck->getTotalWeight() << std::endl;



    // No need to do the delete operations
	// Objects will be reference counted.



// Running Valgrind as test

// $ valgrind -v ./Example-1

//	==23239== HEAP SUMMARY:
//	==23239==     in use at exit: 0 bytes in 0 blocks
//	==23239==   total heap usage: 5 allocs, 5 frees, 73,920 bytes allocated
//	==23239==
//	==23239== All heap blocks were freed -- no leaks are possible
//	==23239==
//	==23239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
//	==23239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


    return 0;
}

