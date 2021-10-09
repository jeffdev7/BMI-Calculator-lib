#include <iostream>
#include "Formula.h"
#include <cmath>

namespace imc {
	void Math() {

		float weight, height, bmi;
		char name[10];
		std::cout << "=======BMI CALCULATOR==========\n" << std::endl;
		std::cout << " Weight (kg) / (Height (m)^2) " << std::endl;
		std::cin >> weight>> height;
		std::cout << "\nYour name" << std::endl;
		std::cin >> name;
		bmi = weight / (height * height);
		std::cout <<"\n Your BMI is " << round(bmi) <<", "<< name <<"."<< std::endl;

		if (std::isless(bmi, 18.5))
			std::cout << "You're an underweight dev, dude!" << std::endl;
		else if (std::isgreater(bmi, 25))
			std::cout << " You're an overweight dev, due!" << std::endl;
		else
			std::cout << "You're a healthy dev, dude!" << std::endl;
	}
}