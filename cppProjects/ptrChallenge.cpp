#include <iostream>

void print(const int *arr, size_t size);
int *get_array(const int *const arr1, size_t size1, const int *const arr2, size_t size2);

int main()
{
	int array1[] {1,2,3,4,5};
	print(array1, 5);

	int array2[] {10,20,30};
	print(array2, 3);
	
	const int *results {nullptr};
	results = get_array(array1, 5, array2, 3);
	std::cout << "Result: ";
	print(results, 15);

	delete [] results;

	return 0;
}
void print(const int *arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << *arr++ << " ";
	}
	std::cout << "\n\n";
}
int *get_array(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
	int *temp {nullptr};
	temp = new int[size1 * size2];

	int count {0};

	for (size_t i = 0; i < size2; i++)
	{
		for (size_t j = 0; j < size1; j++)
		{
			*(temp + count) = arr1[j] * arr2[i];
			count++;
		}
	}

	return temp;
}