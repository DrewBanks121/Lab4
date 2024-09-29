#include "Temp.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>




Temp::Temp()
{
}

Temp::~Temp()
{
}

void Temp::getTemp()
{
	// Open the file
	std::ifstream inputFile("TempIn.dat");


	float number;
	while (inputFile >> number) { // Read numbers until the end of the file
		double TempStar = 0;
		TempStar = std::round(abs(number / 3));

		
		//Checks to see the required amount of spaces and star to print
		if (number >= 0 && number < 10) {
			std::cout << std::setw(3) << number << std::setw(15) << "|";
			while (TempStar > 0) {
				std::cout << "*";
				TempStar--;
			}
			std::cout << std::endl;
		}
		if (number >= 10 && number < 99) {
			std::cout << std::setw(3) << number << std::setw(15) << "|";

			while (TempStar > 0) {
				std::cout << "*";
				TempStar--;
			}
			std::cout << std::endl;
		}
		if (number <= -1 && number > -10) {
			std::cout << std::setw(3);
			std::cout << number << std::setw(1 + (14 - TempStar));
			while (TempStar > 0) {
				std::cout << "*";
				TempStar--;
			}
			std::cout << "|";
			std::cout << std::endl;
		}
		if (number <= -10 && number >= -30) {
			std::cout << number;
			std::cout << std::setw(15 - TempStar);

			while (TempStar > 0) {
				std::cout << "*";
				TempStar--;
			}
			std::cout << "|";
			std::cout << std::endl;
		}
		if (number >= 100) {
			std::cout << number << std::setw(15) << "|";

			while (TempStar > 0) {
				std::cout << "*";
				TempStar--;
			}
			std::cout << std::endl;
		}
		
	}
	

	
	//close the file
	inputFile.close();

}
