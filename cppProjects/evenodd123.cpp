#include <iostream>

int main()
{
	int num;
	std::cout << "Enter number: ";
	std::cin >> num;
	
	if (num % 35 == 0)
	{
		std::cout << num << " is both multiple of 7 and 5.";
	}
	else if (num % 5 == 0)
	{
		std::cout << num << " is multiple of 5.";
	}
	else if (num % 7 == 0)
	{
		std::cout << num << " is multiple of 7.";
	}
	else
	{
		std::cout << num << " is neither multiple of 5 or 7.";
	}
	
	return 0;
}