#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    int input[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> input[i];
    }
    std::cout << ((double)input[0] / input[2]) * ((double)input[1] / input[3]);
    return 0;
}
