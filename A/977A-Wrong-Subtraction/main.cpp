#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    std::cin >> n;
    std::cin >> k;
    for (int i = k; i > 0; i--)
    {
        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
    }
    std::cout << n;

    return 0;
}
