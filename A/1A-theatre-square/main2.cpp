#include <iostream>
#include <math.h>
int main(int argc, char const *argv[])
{
    int input[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> input[i];
    }
    std::cout << std::fixed << (long long int)(ceil((double)input[0] / input[2]) * ceil((double)input[1] / input[2]));
    return 0;
}