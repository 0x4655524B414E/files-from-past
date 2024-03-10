#include <iostream>

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 1; j < 1000; j++)
		{
			int sumOfLeftSide {(i*(i-1))/2};
			int sumOfRightSide {((j*(j+1))/2) - ((i*(i+1))/2)};

			if (sumOfLeftSide == sumOfRightSide)
			{
				std::cout << "Mathematician's house number: " << i << "\nNumber of houses in the street: " << j;
			}		
		}
	}
	
	return 0;
}