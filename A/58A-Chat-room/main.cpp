#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    std::cin >> s;
    char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int cout = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (cout > 4)
            break;
        if (s[i] == hello[cout])
            cout++;
    }
    if (cout > 4)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}
