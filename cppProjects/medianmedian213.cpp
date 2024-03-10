#include <iostream>
#include <vector>

void sort(std::vector<int> &vector);
void display(const std::vector<int> &vector);
double get_median(std::vector<int> &vector);

int main()
{
	int num1, num2, num3;
	std::cout << "Enter integer 1: ";
	std::cin >> num1;
	std::cout << "Enter integer 2: ";
	std::cin >> num2;
	std::cout << "Enter integer 3: ";
	std::cin >> num3;

	std::vector<int> intvector {num1, num2, num3};
	display(intvector);

	sort(intvector);
	display(intvector);
	std::cout << get_median(intvector);
	
	return 0;
}
void sort(std::vector<int> &vector)
{
	for (size_t j = vector.size()-1; j > 0; j--)
	{
		for (size_t i = 0; i < j; i++)
		{
			if (vector.at(i) < vector.at(i+1))
			{
				int temp {vector.at(i)};
				vector.at(i) = vector.at(i+1);
				vector.at(i+1) = temp;
			}
		}
	}
}
void display(const std::vector<int> &vector)
{
	for (auto &&i : vector)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}
double get_median(std::vector<int> &vector)
{
	sort(vector);
	if (vector.size() % 2)
	{
		return vector.at(vector.size()/2);
	}
	else
	{
		return (vector.at(vector.size()/2) + vector.at(vector.size()/2 - 1))/2.0;
	}
}
