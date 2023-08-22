#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int n, k;
    std::cin >> n >> k;
    int m = 240 - k;
    int i = 1;
    int p = 0;

    for (i; i < n + 1; i++)
    {
        p = i * 5;
        // std::cout << p << " ";
        m = m - p;
        // std::cout << m << " ";
        // std::cout << std::endl;

        if (m < 0)
        {
            break;
        }
        if (m == 0)
        {
            i++;
            break;
        }
    }

    std::cout << i - 1;
    return 0;
}
