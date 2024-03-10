#include <iostream>

int main()
{
	int satir {5};
	for (int i = 0; i <= satir; i++)
	{
		for (int j = 4-i; j > 0; j--)
		{
			std::cout << " ";
		}
		for (int j = 1; j<=1+2*i; j++)
		{
			std::cout << "*";
		}
		for (int j = 4-i; j > 0; j--)
		{
			std::cout << " ";
		}
		std::cout << '\n';
	}
		

	return 0;
}