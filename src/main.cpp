#include "main.h"

#include <iostream>

void main::printWorks() const{
	std::cout << "lib is working!";
}

void SubMain::printWorks() const{
	std::cout << "lib is working in SubMain";
}