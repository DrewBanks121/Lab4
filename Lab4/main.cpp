/*
	Andrew Banks
	Computer Science Fall 2024
	Due: 10/15/2024
	Lab4 - Lab 4 Temperature Output
	Collect hourly temperature data from a file and 
	output the data to the console in bar chart format.
*/

#include <iostream>
#include <iomanip>
#include "Temp.h"

int main() {
	//Creates Temp object
	Temp temp;

	//Sets up graph information
	std::cout << "Hourly Temperature" << std::endl;
	std::cout << std::setw(8) << "-30" << "         0" << "        30" << "        60" << "        90" << "        120" << std::endl;
	//Calls getTemp function
	temp.getTemp();
		return 0;
	
	
}



	