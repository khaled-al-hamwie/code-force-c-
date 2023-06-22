#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    std::cin >> name;
    unordered_set<char> name_set(name.begin(), name.end());
    if (name_set.size() % 2 == 1)
    {
        std::cout << "IGNORE HIM!";
    }
    else
    {
        std::cout << "CHAT WITH HER!";
    };
    return 0;
}
