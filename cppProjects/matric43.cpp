#include <iostream>

int main()
{
	double a11, a12, a21, a22;
	std::cout << "Enter a11; ";
	std::cin >> a11;
	std::cout << "Enter a12; ";
	std::cin >> a12;
	std::cout << "Enter a21; ";
	std::cin >> a21;
	std::cout << "Enter a22; ";
	std::cin >> a22;

	double determinant {a11 * a22 - a12 * a21};
	std::cout << "determinant: " << determinant;

	return 0;
}