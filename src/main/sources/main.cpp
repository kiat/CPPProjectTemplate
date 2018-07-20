#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <memory>
#include <vector>

#include "Auto.h"
#include "SedanCar.h"
#include "Truck.h"

using namespace std;

int main(int argc, char **argv) {


	// Create 3 Objects
	// No deletes and no new operators are used.

	// This is my Auto.
	auto  myAuto  =  std::make_shared <SedanCar>();
	myAuto->setNoOfPassengers(4);
	myAuto->setTailLoad(double (101.5));

	std::cout << "Total weight of my Sedan Car is: ";
	std::cout <<  myAuto->getTotalWeight() << std::endl;


	std::cout << "=======   Separator  ======== "<< std::endl;

    // And this is my truck.
	auto  myTruck  =  std::make_shared <Truck>();
	myTruck->setNoOfPassengers(2);
	myTruck->setTailLoad(double (500.50));

	std::cout << "Total weight of my Sedan Car is: ";
	std::cout <<  myTruck->getTotalWeight() << std::endl;

	std::cout << "=======   Separator  ======== "<< std::endl;

	// Now let us make a vector of my cars.
	std::vector<AutoPtr> cars;
	cars.push_back(myAuto);
	cars.push_back(myTruck);

	double totalWeight=0;
	for (AutoPtr c: cars) {
		totalWeight+=c->getTotalWeight();

	}

	std::cout << "Total weight of my cars are: ";
			std::cout << 	+  totalWeight << std::endl;

     std::cout << "=======   Separator  ======== "<< std::endl;


     std::cout << "Now Objects have no references and are removed from memory automatically."<< std::endl;

     std::cout << "=======   Separator  ======== "<< std::endl;


    // No need to do the delete operations
	// Objects will be reference counted.



// Running Valgrind as test

// $ valgrind -v ./Example-1
//     ==4516==
//     ==4516== HEAP SUMMARY:
//     ==4516==     in use at exit: 0 bytes in 0 blocks
//     ==4516==   total heap usage: 6 allocs, 6 frees, 73,888 bytes allocated
//     ==4516==
//     ==4516== All heap blocks were freed -- no leaks are possible
//     ==4516==
//     ==4516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
//     ==4516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)



    return 0;
}

