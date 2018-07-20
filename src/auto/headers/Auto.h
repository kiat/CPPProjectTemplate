//
// Created by Kia Teymourian on 5/11/18.
//

#ifndef ASSIGNMENT_1_COFFEE_H
#define ASSIGNMENT_1_COFFEE_H


#include <iostream>
#include <memory>
#include <string>

class Auto;
typedef std::shared_ptr<Auto> DrinkPtr;

class Auto {

private:
   std::string name;
   int numberOfDoors;

public :
    Auto();

	virtual ~Auto() {
	}

	std::string& getName();

	void setName(const std::string& name);

	int getNumberOfDoors() const {
		return numberOfDoors;
	}

	void setNumberOfDoors(int numberOfDoors) {
		this->numberOfDoors = numberOfDoors;
	}
};


#endif //ASSIGNMENT_1_COFFEE_H
