#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    std::cin >> word;
    word[0] = toupper(word[0]);
    cout << word;
    return 0;
}
