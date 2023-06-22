#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string input[2];
    for (int i = 0; i < 2; i++)
    {
        std::cin >> input[i];
    }

    for (int i = 0; i < input[0].length(); i++)
    {
        if (std::tolower(input[0][i]) > std::tolower(input[1][i]))
        {
            std::cout << 1;
            return 0;
        }
        else if (std::tolower(input[0][i]) < std::tolower(input[1][i]))
        {
            std::cout << -1;
            return 0;
        }
        else if (i == input[0].length() - 1 && std::tolower(input[0][i]) == std::tolower(input[1][i]))
        {
            std::cout << 0;
            return 0;
        }
    }

    return 0;
}
