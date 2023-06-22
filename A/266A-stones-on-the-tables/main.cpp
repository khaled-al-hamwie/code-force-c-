#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int rock_number;
    std::cin >> rock_number;
    string str;
    std::cin >> str;
    int result = 0;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
            result++;
    }
    std::cout << result;

    return 0;
}
