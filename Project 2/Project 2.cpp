#include <iostream>

int main()
{
	// Algorithimic steps; 1 Create a variable for the ocean level's rise per year
	// step 2 multiply this variable by 5, 7, and 10 years to calculate the amount of sea leavel rise for each respect year.
	// step 3 print the results to the console.
	double a = 1.5; // a represents the number of millimeters the ocean level rises per year.
	double b = 5; // b represents 5 years
	double c = 7; // c represents 7 years
	double d = 10; // d represents 10 years
	double sealevelrisefor5years = a * b; // This line calculates the sea level rise for 5 years.
	double sealevelrisefor7yearrs = a * c; // this line calculate the sea level rise for 7 years.
	double sealevelrisefor10years = a * d; // this line calculates the sea level rise for 10 years.

	// this line prints the results to the console

	std::cout << "The ocean level rises 1.5 millimeters per year." << std::endl;
	std::cout << "In five years the sea will rise " << sealevelrisefor5years << " millimeters." << std::endl;
	std::cout << "In seven years the sea will rise " << sealevelrisefor7yearrs << " millimeters." << std::endl;
	std::cout << "In ten years the sea will rise " << sealevelrisefor10years << " milimeters." << std::endl;


	return 0;
}