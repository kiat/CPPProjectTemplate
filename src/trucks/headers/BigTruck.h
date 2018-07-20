//
// Created by kia on 5/11/18.
//

#ifndef ASSIGNMENT_1_ESPRESSO_H
#define ASSIGNMENT_1_ESPRESSO_H



#include "Truck.h"

class BigTruck;
typedef std::shared_ptr<BigTruck> EspressoPtr;

class BigTruck : public Truck {



public:
    BigTruck();
    ~BigTruck() {};


};


#endif //ASSIGNMENT_1_ESPRESSO_H
