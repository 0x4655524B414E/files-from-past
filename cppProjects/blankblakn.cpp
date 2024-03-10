#include <iostream>

int getSumOfDigits(int n);
int getSumOfPrimeFactors(int n);

int main()
{
	for (int i = 2; i < 1'000; i++)
	{
		int sumOfDigits = getSumOfDigits(i);
		int sumOfPrimeFactors = getSumOfPrimeFactors(i);
		if (sumOfDigits == sumOfPrimeFactors)
		{
			std::cout << i << " is a Smith number." << std::endl;
		}
	}
	
	return 0;
}
int getSumOfDigits(int n)
{
	int sum {0};
	while (n > 0)
	{
		sum += n%10;
		n = n / 10;
	}
	return sum;
}
int getSumOfPrimeFactors(int n)
{
	int sum {0};
	for (size_t i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			n = n / i;
		}
		
	}
	
}