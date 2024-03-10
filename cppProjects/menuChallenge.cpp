#include <iostream>
#include <vector>

int main()
{
    std::vector <int> intList {};

    char choice {};
    do
    {
        std::cout << "----Options----" << std::endl <<
        "P - Print numbers\n"<<
        "A - Add a number\n"<<
        "M - Display mean of the numbers\n"<<
        "S - Display the smallest number\n"<<
        "L - Display the largest number\n" <<
        "Q - Quit\n";
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 'P':
        case 'p':
            if (intList.size() != 0)
            {
                std::cout << "[";
                for (size_t i = 0; i < intList.size(); i++)
                {
                    std::cout << intList.at(i);
                    if (intList.size() != i+1)
                    {
                        std::cout << ", ";
                    }
                    else
                    {
                        std::cout << "]\n";
                    }
                }
            }
            else
            {
                std::cout << "[] - the list is empty!" << std::endl;
            }
            std::cout << std::endl;
            break;

        case 'A':
        case 'a':
            int temp;
            std::cout << "Enter number to add: ";
            std::cin >> temp;
            intList.push_back(temp);
            std::cout << temp << " added to the list!" << std::endl;
            break;

        case 'M':
        case 'm':
            if (intList.size() != 0)
            {                
                int temp {};
                for (int i = 0; i < intList.size(); i++)
                {
                    temp += intList.at(i);
                }
                std::cout << "Mean: " << static_cast<double>(temp) / intList.size() << std::endl;
            }
            else
            {
                std::cout << "Unable to calculate the mean - no data!" << std::endl;
            }
            break;

        case 'S':
        case 's':
            if (intList.size() != 0)
            {
                int temp {intList.at(0)};
                for (size_t i = 0; i < intList.size(); i++)
                {
                    intList.at(i) < temp ? temp = intList.at(i) : 1;
                }
                std::cout << "Smallest number: " << temp << std::endl;
            }
            else
            {
                std::cout << "Unable to determine the smallest number - list is empty!" << std::endl;
            }
            break;

        case 'L':
        case 'l':
            if (intList.size() != 0)
            {
                int temp {intList.at(0)};
                for (size_t i = 0; i < intList.size(); i++)
                {
                    intList.at(i) > temp ? temp = intList.at(i) : 1;
                }
                std::cout << "Largest number: " << temp << std::endl;
            }
            else
            {
                std::cout << "Unable to determine the largest number - list is empty!" << std::endl;
            }
            break;

        case 'Q':
        case 'q':
            std::cout << "Quitting the application...\n" << std::endl;
            break;

        default:
            std::cout << "Unknown selection, please try again!" << std::endl;
            break;
        } 
    } while (choice != 'Q' && choice != 'q');
    
    return 0;
}