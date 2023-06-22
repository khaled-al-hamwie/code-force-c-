#include <iostream>

int main(int argc, char const *argv[])
{
    int w;
    std::cin >> w;
    if (w % 2 == 0)
    {
        std::cout << "YES";
        return 0;
    }
    std::cout << "NO";
    return 0;
}
