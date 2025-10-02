

#include <iostream>

int main()
{
	// Algorithimic steps; Create a value to represent total number of surveyed customers
	// step 2 Create a value to represent the percentage of  the surveyed customers that purchased one or more energy drinks per week
	// step 3 multiply value from step 1 by step 3, than multiply this value by 58%. The number produced is the final answer
    double a = 16500; // A represents the number of people surveyed by a soft drink company.
	double b = 0.15; // B represents the percentage of people who purcahsed one or more energy drinks per week.
	double c = a * b; // This line calculates the number of people who purchase one or more energy drinks per week.
	double d = 0.58; // D represents the percent of people who prefer citrus flavored energy drinks.
	double e = c * d; // This line calculates the number of people who prefer citrus flavored energy drinks.

  
	// this line prints the results to the console
	std::cout << "A car has a gas mileage of " << a << " miles per gallon in town" << std::endl;
	std::cout << "A car has a gas mileage of " << b << " miles per gallon on the highway " << std::endl;
	std::cout << "When driven in town the car can travel " << Milestraveledintown << " miles on one tank" << std::endl;
	std::cout << "When driven on the highway the car can travel " << Milestraveledonthehighway << " miles on one tank" << std::endl;
	return 0;
}