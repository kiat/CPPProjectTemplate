//
// Created by Kia Teymourian on 5/11/18.
//

#ifndef EXAMPLE_1_AUTO_H
#define EXAMPLE_1_AUTO_H

#include <iostream>
#include <memory>
#include <string>

class Auto;
typedef std::shared_ptr<Auto> AutoPtr;

class Auto {

private:
	int noOfPassengers = 1;
	double bootLoad = 0;
	double tailLoad = 0;
	double autoMainWeight = 0;

public:
	Auto();
	virtual ~Auto();

	std::string& getName();

	void setName(const std::string& name);
	double getLoad() const;
	void setLoad(double load);
	int getNoOfPassengers() const;
	void setNoOfPassengers(int noOfPassengers);
	double getAutoMainWeight() const;
	void setAutoMainWeight(double autoMainWeight);
	double getBootLoad() const;
	void setBootLoad(double bootLoad);
	double getTailLoad() const;
	void setTailLoad(double tailLoad);

	virtual double getTotalWeight() {
		std::cout << "Parent class area :" << std::endl;
		return 0;
	};

};

#endif // EXAMPLE_1_AUTO_H
