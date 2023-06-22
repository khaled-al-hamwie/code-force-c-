#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    int result = 0;
    int rest = 0;
    if (x > 5)
    {
        result = x / 5;
        rest = x % 5;
        if (rest > 0)
        {
            result++;
        }
    }
    else
    {
        result = 1;
    }
    std::cout << result;
    return 0;
}
