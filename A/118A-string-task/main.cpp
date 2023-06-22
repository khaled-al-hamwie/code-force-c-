#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    std::cin >> word;
    string vowels = "AEIOUYaeiouy";
    string result = "";
    for (char c : word)
    {
        if (vowels.find(c) == string::npos)
        {
            result += ".";
            if (isupper(c))
            {
                c = tolower(c);
            }
            result += c;
        }
    }
    cout << result << endl;

    return 0;
}
