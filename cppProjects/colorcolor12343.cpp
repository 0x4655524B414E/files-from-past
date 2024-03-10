#include <iostream>

int sumOfDivisors(int num);

int main()
{	
	for (int i = 4; i < 1001; i++)
	{
		if (sumOfDivisors(i) == i)
		{
			std::cout << i << " ";
		}
	}
	return 0;
}

int sumOfDivisors(int num)
{
	int sum {0};
	for (int i = 1; i <= num/2; i++)
	{
		if (!(num % i))
		{
			sum += i;
		}
	}
	return sum;
}
