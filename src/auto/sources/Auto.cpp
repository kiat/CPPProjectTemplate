#include "Auto.h"

#include <cstdlib>
#include <iostream>


Auto::Auto() { };

std::string& Auto::getName() {
	return name;
}


void Auto::setName(const std::string& name) {
	this->name = name;
}

