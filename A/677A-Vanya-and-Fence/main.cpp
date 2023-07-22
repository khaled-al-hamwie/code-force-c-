#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int h;
    std::cin >> h;
    int width = n;
    int a;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        if (a > h)
        {
            width++;
        }
    }
    std::cout << width;

    return 0;
}
