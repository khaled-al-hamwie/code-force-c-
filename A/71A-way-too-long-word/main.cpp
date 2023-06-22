#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::string a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i].length() <= 10)
        {
            std::cout << a[i];
            std::cout << std::endl;
            continue;
        }
        std::cout << a[i][0] << a[i].length() - 2 << a[i][a[i].length() - 1];
        std::cout << std::endl;
    }

    return 0;
}
