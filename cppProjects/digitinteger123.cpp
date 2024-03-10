#include <iostream>

int main()
{	
	int num;
	std::cout << "Enter a 3-digit, distinct digits, positive integer: ";
	std::cin >> num;

	if (num > 99 && num < 1000)
	{
		if (num % 10 == (num/10)%10 || 
			num % 10 == num/100 ||
		 	num/100 == (num/10)%10)
		{
			std::cout << "Next time please enter distinct digits!";
		}
		else
		{
			std::cout << "Correct!";
		}
	}
	else
	{
		std::cout << "Next time please enter a positive and 3-digit integer!";
	}
	
	return 0;
}