#include <iostream>

int main()
{
	int num;
	std::cout << "integer in base 10: ";
	std::cin >> num;

	std::cout << "integer in decimal: " << std::dec << num << std::endl;
	std::cout << "integer in hexadecimal: " << std::hex << num << std::endl;
	std::cout << "integer in octal: " << std::oct << num << std::endl;

	return 0;
}