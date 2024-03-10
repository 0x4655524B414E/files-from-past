#include <iostream>

int main()
{
	double fahrenheit;
	std::cout << "Enter Fahrenheit: ";
	std::cin >> fahrenheit;

	double celcius {(fahrenheit - 32) * (5.0/9)};
	std::cout << fahrenheit << " Fahrenheit equals to " << celcius << " Celcius degrees.";

	return 0;
}