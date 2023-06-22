#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    int input[2];
    for (int i = 0; i < 2; i++)
    {
        std::cin >> input[i];
    }
    int rest = 0;
    if (input[1] % 2 == 1)
    {
        rest = (floor((double)input[0] / 2));
    }
    std::cout << (floor((double)input[1] / 2) * input[0]) + rest;
    return 0;
}
