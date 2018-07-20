//
// Created by Kia Teymourian on 5/11/18.
//

#ifndef EXAMPLE_1_TRUCK_CC
#define EXAMPLE_1_TRUCK_CC

#include "Truck.h"

#include <iostream>

Truck::Truck() {

	std::cout << "A SedanCar Object is created. " << std::endl;

}

Truck::~Truck() {

	std::cout << "A SedabCar Object is deleted from memory. " << std::endl;

}

/**
 * calculates the total load for a Sedan car.
 */
double Truck::getTotalWeight() {

	return double(this->getNoOfPassengers() * 80) + this->getAutoMainWeight()
			+ this-> getBootLoad();

}



#endif // EXAMPLE_1_TRUCK_CC

