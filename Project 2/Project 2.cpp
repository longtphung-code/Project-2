

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
	std::cout << a << " Is the number of people surveyed by a soft drink company" << std::endl;
	std::cout << "Of this number of people only 15% purchase one or more energy drinks per week. " << std::endl;
	std::cout << "The number of people who purchase one or more energy drinks per week is " << c << std::endl;
	std::cout << "of the 2475 people only 58% of them prefer citrus-flavoured energy drinks" << std::endl;
	std::cout << "The number of people who prefer citrus-flavoured energy drinks is " << e << std::endl;
	return 0;
}