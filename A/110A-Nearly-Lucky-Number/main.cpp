#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
            count++;
    }
    if (count == 4 || count == 7)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
