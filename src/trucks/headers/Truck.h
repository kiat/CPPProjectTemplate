//
// Created by Kia Teymourian on 5/12/18.
//

#ifndef ASSIGNMENT_1_LATTEMACCHIATO_H
#define ASSIGNMENT_1_LATTEMACCHIATO_H

#include <memory>
#include <string>

#include "../../auto/headers/Auto.h"

class Truck;
typedef std::shared_ptr<Truck> LatteMacchiatoPtr;

class Truck: public Auto {

private:
	int loadCapacity;

public:

	~Truck() {
	}
	;

	Truck();

	int getLoadCapacity() {
		return loadCapacity;
	}

	void setLoadCapacity(int loadCapacity) {
		this->loadCapacity = loadCapacity;
	}
};

#endif //ASSIGNMENT_1_LATTEMACCHIATO_H
