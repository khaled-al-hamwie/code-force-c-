#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int arr[14] = {
        4,
        7,
        47,
        74,
        44,
        77,
        444,
        447,
        474,
        477,
        777,
        774,
        747,
        744,
    };

    bool is_lucky = false;
    for (int i = 0; i < 14; i++)
    {
        if (n % arr[i] == 0)
        {
            is_lucky = true;
            break;
        }
    }

    if (is_lucky)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
