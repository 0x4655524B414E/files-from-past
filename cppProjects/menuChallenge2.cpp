#include <iostream>
#include <vector>
#include <cctype>

void displayMenu();
char optionSelection();
void printNumbers(const std::vector<int> &);
void addNumber(std::vector<int> &);
void calcMean(const std::vector<int> &);
void calcSmallNum(const std::vector<int> &);
void calcLargeNum(const std::vector<int> &);
void mainFunc(std::vector<int> &vector);

int main()
{
    std::vector <int> myVector {};
    mainFunc(myVector);

    return 0;
}
void displayMenu()
{
    std::cout << "----Options----" << std::endl <<
    "P - Print numbers\n"<<
    "A - Add a number\n"<<
    "M - Display mean of the numbers\n"<<
    "S - Display the smallest number\n"<<
    "L - Display the largest number\n" <<
    "Q - Quit\n" << std::endl;
}
char optionSelection()
{
    char selection;
    do
    {
    std::cout << "Enter your choice: ";
    std::cin >> selection;
    selection = toupper(selection);
    
    } while (selection != 'P' &&
    selection != 'A' &&
    selection != 'M' && 
    selection != 'S' && 
    selection != 'L' &&
    selection != 'Q');

    return selection;
}
void printNumbers(const std::vector<int> &vector)
{
    if (vector.size() == 0)
    {
        std::cout << "[] - the list is empty!" << std::endl;
    }
    else
    {
        std::cout << "[";
        for (size_t i = 0; i < vector.size(); i++)
        {
            std::cout << vector.at(i);
            if (vector.size() != i+1)
            {
                std::cout << ", ";
            }
            else
            {
                std::cout << "]\n";
            }
        }
    }
}
void addNumber(std::vector<int> &vector)
{
    int temp;
    std::cout << "Enter number to add: ";
    std::cin >> temp;
    vector.push_back(temp);
    std::cout << temp << " added to the list!" << std::endl;
}
void calcMean(const std::vector<int> &vector)
{
    if (vector.size() != 0)
    {                
        int temp {};
        for (int i = 0; i < vector.size(); i++)
        {
            temp += vector.at(i);
        }
        std::cout << "Mean: " << static_cast<double>(temp) / vector.size() << std::endl;
    }
    else
    {
        std::cout << "Unable to calculate the mean - no data!" << std::endl;
    }
}
void calcSmallNum(const std::vector<int> &vector)
{
    if (vector.size() != 0)
    {
        int temp {vector.at(0)};
        for (size_t i = 0; i < vector.size(); i++)
        {
            vector.at(i) < temp ? temp = vector.at(i) : 1;
        }
        std::cout << "Smallest number: " << temp << std::endl;
    }
    else
    {
        std::cout << "Unable to determine the smallest number - list is empty!" << std::endl;
    }
}
void calcLargeNum(const std::vector<int> &vector)
{
        if (vector.size() != 0)
    {
        int temp {vector.at(0)};
        for (size_t i = 0; i < vector.size(); i++)
        {
            vector.at(i) > temp ? temp = vector.at(i) : 1;
        }
        std::cout << "Largest number: " << temp << std::endl;
    }
    else
    {
        std::cout << "Unable to determine the largest number - list is empty!" << std::endl;
    }
}
void mainFunc(std::vector<int> &vector)
{
    char choice;
    while (choice != 'Q')
    {
        displayMenu();
        choice = optionSelection();

        switch (choice)
        {
        case 'P': printNumbers(vector);
            break;
            
        case 'A': addNumber(vector);
            break;

        case 'M': calcMean(vector);
            break;

        case 'S': calcSmallNum(vector);
            break;

        case 'L': calcLargeNum(vector);
            break;
        }
    } 
}
