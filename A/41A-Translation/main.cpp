#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, t;
    std::cin >> s;
    std::cin >> t;
    int reversly = 1;
    int j = s.length() - 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[j])
        {
            reversly = 0;
            break;
        }
        j--;
    }
    if (reversly == 1)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}