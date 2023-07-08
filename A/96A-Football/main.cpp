#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string n;
    std::cin >> n;
    int clumps = 0;
    for (int i = 0; i < n.length() - 1; i++)
    {
        if (n[i] == n[i + 1])
        {
            clumps++;
        }
        else if (clumps >= 6)
        {
            break;
        }
        else
        {
            clumps = 0;
        }
    }
    if (clumps < 6)
        std::cout << "NO";
    if (clumps >= 6)
        std::cout << "YES";
    return 0;
}
