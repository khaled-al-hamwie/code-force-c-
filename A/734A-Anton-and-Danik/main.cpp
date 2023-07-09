#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    string s;
    std::cin >> s;
    int ACount = 0;
    int DCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            ACount++;
        else if (s[i] = 'D')
            DCount++;
    }
    if (ACount > DCount)
        std::cout << "Anton";
    else if (DCount > ACount)
        std::cout << "Danik";
    else
        std::cout << "Friendship";

    return 0;
}
