#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int inputs[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> inputs[i];
    }
    int cost = 0;
    for (int i = 1; i <= inputs[2]; i++)
    {
        cost += i * inputs[0];
    }
    if (inputs[1] > cost)
    {
        std::cout << 0;
    }
    else
        std::cout << cost - inputs[1];
    return 0;
}
