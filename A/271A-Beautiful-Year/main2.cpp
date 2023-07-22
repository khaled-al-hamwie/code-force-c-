#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    std::cin >> year;
    while (true)
    {
        year += 1;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << year << endl;
    // int year = 2014;
    // int a = year / 1000;
    // int b = year / 100 % 10;
    // int c = year / 10 % 10;
    // int d = year % 10;
    // std::cout << a << " " << b << " " << c << " " << d;
    return 0;
}
