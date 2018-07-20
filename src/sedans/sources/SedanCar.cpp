//
// Created by Kia Teymourian on 5/12/18.
//


#ifndef EXAMPLE_1_SEDANCAR_CC
#define EXAMPLE_1_SEDANCAR_CC


#include "SedanCar.h"

#include <iostream>

SedanCar::SedanCar() {

	std::cout << "A SedanCar Object is created. " << std::endl;

}

SedanCar::~SedanCar() {

	std::cout << "A SedanCar Object is deleted from memory. " << std::endl;

}

/**
 * calculates the total load for a Sedan car.
 */
double SedanCar::getTotalWeight() {

	return double(this->getNoOfPassengers() * 80) + this->getAutoMainWeight()
			+ this-> getBootLoad();

}


#endif // EXAMPLE_1_SEDANCAR_CC
