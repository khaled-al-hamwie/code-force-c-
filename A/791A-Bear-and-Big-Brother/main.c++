#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int weights[2];
    for (int i = 0; i < 2; i++)
    {
        std::cin >> weights[i];
    }
    int result = 0;
    while (weights[0] <= weights[1])
    {
        weights[0] = weights[0] * 3;
        weights[1] = weights[1] * 2;
        result++;
    }
    std::cout << result;
    return 0;
}
