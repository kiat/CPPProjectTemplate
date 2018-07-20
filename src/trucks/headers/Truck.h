//
// Created by Kia Teymourian on 5/12/18.
//

#ifndef EXAMPLE_1_TRUCK_H
#define EXAMPLE_1_TRUCK_H

#include "Auto.h"

class Truck;
typedef std::shared_ptr<Truck> TruckPtr;

class Truck: public Auto {

private:

public:

	~Truck();

	Truck();

    double getTotalWeight();

};

#endif //EXAMPLE_1_TRUCK_H
