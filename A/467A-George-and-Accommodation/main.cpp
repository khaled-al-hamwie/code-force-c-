#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp1, temp2;
        std::cin >> temp1 >> temp2;
        if (temp2 - temp1 >= 2)
        {
            count++;
        }
    }
    std::cout << count;

    return 0;
}
