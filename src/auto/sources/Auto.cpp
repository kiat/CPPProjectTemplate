#ifndef EXAMPLE_1_AUTO_CC
#define EXAMPLE_1_AUTO_CC

#include <cstdlib>
#include <iostream>

#include "Auto.h"

Auto::Auto() {
	std::cout << "Auto Object is created. " << std::endl;
}

Auto::~Auto() {
	std::cout << "Auto Object is deleted from memory. " << std::endl;
}

double Auto::getLoad() const {
	return bootLoad;
}

void Auto::setLoad(double load) {
	this->bootLoad = load;
}

int Auto::getNoOfPassengers() const {
	return noOfPassengers;
}

void Auto::setNoOfPassengers(int noOfPassengers) {
	this->noOfPassengers = noOfPassengers;
}

double Auto::getAutoMainWeight() const {
	return autoMainWeight;
}

double Auto::getBootLoad() const {
	return bootLoad;
}

void Auto::setBootLoad(double bootLoad) {
	this->bootLoad = bootLoad;
}

double Auto::getTailLoad() const {
	return tailLoad;
}

void Auto::setTailLoad(double tailLoad) {
	this->tailLoad = tailLoad;
}

void Auto::setAutoMainWeight(double autoMainWeight) {
	this->autoMainWeight = autoMainWeight;
}

#endif // EXAMPLE_1_AUTO_CC

