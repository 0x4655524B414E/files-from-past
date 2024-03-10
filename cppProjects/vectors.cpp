#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vector1;
    std::vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "First element of vector1: " << vector1.at(0) << std::endl;
    std::cout << "Second element vector2: " << vector1.at(1) << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "\nFirst element of vector2: " << vector2.at(0) << std::endl;
    std::cout << "Second element of vector2: " << vector2.at(1) << std::endl;

    std::vector <std::vector <int>> vector_2d; // 2d vector declaration example

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "\nvector_2d\n0.0: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "0.1: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "1.0: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "1.1: " << vector_2d.at(1).at(1) << std::endl;

    vector1.at(0) = 1000;

    std::cout << "\nvector_2d\n0.0: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "0.1: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "1.0: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "1.1: " << vector_2d.at(1).at(1) << std::endl;

    std::cout << "\nvector1\n" << vector1.at(0) << std::endl;
    std::cout << vector1.at(1);

    return 0;
}