#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string n;
    std::cin >> n;
    int lower = 0;
    int upper = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (isupper(n[i]))
        {
            upper++;
        }
        else if (islower(n[i]))
        {
            lower++;
        }
    }
    if (lower >= upper)
    {
        for (int i = 0; i < n.length(); i++)
        {
            n[i] = tolower(n[i]);
        }
    }
    else
    {
        for (int i = 0; i < n.length(); i++)
        {
            n[i] = toupper(n[i]);
        }
    }
    std::cout << n;
    return 0;
}
