#include <iostream>

int main()
{
	// Algorithimic steps; 1 Create a variable for the the MPG when a car travels in town and on the highway
	// step 2 multiply each variable by 20 gallons to get the distance the car can travel on one tank of gas for each respective variable
	// step 3 print the results to the console.
	double a = 23.5; // a represent the mile per gallon when driven in town
	double b = 28.9; // b represents the mile per gallon when driven on the highwya
	double Milestraveledintown = a * 20; // this line calculates the distance the car can travel on one tank of gas in town
	double Milestraveledonthehighway = b * 20; // this line calculates the distance the car can travel on one tank of gas on the highway

	// this line prints the results to the console

	std::cout << "A car has a gas tank size of 20 Gallons. " << std::endl;
	std::cout << "This car has a gas mileage of " << a << " miles per gallon in town" " and gas mileage of " << b << "on the highway " << std::endl;
	std::cout << "When driven in town the car can travel " << Milestraveledintown << " miles on one tank." << std::endl;
	std::cout << "When driven on the highway the car can travel " << Milestraveledonthehighway << " miles on one tank." << std::endl;

	return 0;
}