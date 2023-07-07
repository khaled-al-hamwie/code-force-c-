#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    std::cin >> count;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < count * 3; i++)
    {
        int temp = 0;
        if (i % 3 == 0)
        {
            std::cin >> temp;
            sum1 += temp;
        }
        else if (i % 3 == 1)
        {
            std::cin >> temp;
            sum2 += temp;
        }
        else
        {
            std::cin >> temp;
            sum3 += temp;
        }
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}
