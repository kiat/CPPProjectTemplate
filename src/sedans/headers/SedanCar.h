//
// Created by Kia Teymourian on 5/11/18.
//

#ifndef EXAMPLE_1_SEDANCAR_H
#define EXAMPLE_1_SEDANCAR_H

#include "Auto.h"

class SedanCar;
typedef std::shared_ptr<SedanCar> SedanCarPtr;

class SedanCar : public Auto {


public:
    SedanCar();
    ~SedanCar();

    double getTotalWeight();

};


#endif //EXAMPLE_1_SEDANCAR_H
