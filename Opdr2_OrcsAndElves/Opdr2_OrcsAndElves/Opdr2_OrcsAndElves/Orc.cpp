#include <iostream>
#include "Orc.h"

void Orc::render(std::string n, int job) {
	name = n;
	std::cout << "This orc's name is " + name + "," << std::endl;

	if (job == 1) {
		std::cout << name + " works as a Farmer." << std::endl << std::endl;
	}
	else if (job == 2) {
		std::cout << name + " works as a Soldier." << std::endl << std::endl;
	}
	else if (job == 3) {
		std::cout << name + " works as a Shaman" << std::endl << std::endl;
	}
	else if (job < 1 || job > 3) {
		std::cout << "ERROR: Not a valid job number" << std::endl;
		std::cout << "1 for Farmer" << std::endl;
		std::cout << "2 for Soldier" << std::endl;
		std::cout << "3 for Shaman " << std::endl << std::endl;
	}
}