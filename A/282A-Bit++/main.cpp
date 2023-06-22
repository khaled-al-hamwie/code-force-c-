#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::string steatment[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> steatment[i];
        if (steatment[i] == "X++" || steatment[i] == "++X")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    std::cout << x;

    return 0;
}
