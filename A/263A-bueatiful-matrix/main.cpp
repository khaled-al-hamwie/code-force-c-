#include <iostream>

int main(int argc, char const *argv[])
{
    int matrix[5][5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                count = abs(2 - i) + abs(2 - j);
            }
        }
    }
    std::cout << count;
    return 0;
}
