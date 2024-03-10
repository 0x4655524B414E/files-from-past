#include <iostream>
#include <string>

int main()
{
    std::string strToBuild;
    std::cout << "Enter a string to build a pyramid: ";
    std::getline(std::cin, strToBuild);

    std::string reverse;

    for (int i = 1; i <= strToBuild.size(); i++)
    {
        std::string temp;
        for (int i = strToBuild.size()-2; i >= 0; i--)
        {
            temp += strToBuild.at(i);
        }
        reverse += strToBuild + temp + '\n';
        strToBuild.erase(strToBuild.size()-1, 1);
        strToBuild.insert(0,1,' ');
    }

    std::string show;
    for (int i = reverse.size()-1; i > -1; i--)
    {
        show += reverse.at(i);
    }
    show.erase(0, 1);

    std::cout << show;

    return 0;
}