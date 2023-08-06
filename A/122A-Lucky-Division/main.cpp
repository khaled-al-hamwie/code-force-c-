#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    std::cin >> n;
    bool is_lucky = true;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != '4' && n[i] != '7')
        {
            is_lucky = false;
            break;
        }
    }
    std::cout << is_lucky;
    int tem = stoi(n);
    if (is_lucky || tem % 4 == 0 || tem % 7 == 0)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
