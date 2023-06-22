#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int input[n][3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int small = 0;
        for (int j = 0; j < 3; j++)
        {
            std::cin >> input[i][j];
            small += input[i][j];
        }
        if (small >= 2)
            count++;
        small = 0;
    }
    std::cout << count;
    return 0;
}
