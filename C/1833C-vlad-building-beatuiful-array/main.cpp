#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int sizes[n];
    int arrays[n][sizes[n]];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> sizes[i];
        bool is_odd = false;
        for (int j = 0; j < sizes[i]; j++)
        {
            std::cin >> arrays[i][j];
            if (arrays[i][0] % 2 == 1)
            {
                is_odd = true;
            }
        }
    }

    // for (int i = 0; i < n * 2; i++)
    // {
    //     std::cout << sizes[i / 2];
    //     std::cout << std::endl;
    //     std::cout << arrays[i / 2];
    //     std::cout << std::endl;
    // }

    return 0;
}
