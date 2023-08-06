#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    bool is_hard = false;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        if (temp == 1)
        {
            is_hard = true;
            break;
        }
    }
    if (is_hard)
    {
        std::cout << "HARD";
    }
    else
    {
        std::cout << "EASY";
    }

    return 0;
}
