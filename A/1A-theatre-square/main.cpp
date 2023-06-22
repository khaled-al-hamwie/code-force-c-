#include <iostream>
int main(int argc, char const *argv[])
{
    int input[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> input[i];
    }
    int count = 0;
    int width = input[0];

    for (int width = input[0]; width > 0; width -= input[2])
        for (int height = input[1]; height > 0; height -= input[2])
            count++;

    std::cout << count;
    return 0;
}
