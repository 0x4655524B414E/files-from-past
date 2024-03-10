#include <iostream>

bool is_friendly_nums(int num1, int num2);
int sum_of_divisors(int num);

int main()
{
	for (int i = 1100; i < 1301; i++)
	{
		for (int j = i+1; j < 1301; j++)
		{
			if (is_friendly_nums(i,j))
			{
				std::cout << "(" << i << ", " << j << ")" << std::endl;
			}
		}
	}
	return 0;
}
bool is_friendly_nums(int num1, int num2)
{
	if (num1 != num2)
	{
		if (sum_of_divisors(num1) == num2 && sum_of_divisors(num2) == num1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
int sum_of_divisors(int num)
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