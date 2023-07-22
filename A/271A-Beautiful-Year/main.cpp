#include <iostream>
#include <string>
#include <set>
using namespace std;
int y;
string ans;
bool disticnt;
int main(int argc, char const *argv[])
{
    std::cin >> y;
    set<int> mySet;
    while (!disticnt)
    {
        ans = to_string(++y);
        mySet.clear();
        for (char digit : ans)
        {
            mySet.insert(digit - '0');
        }
        disticnt = mySet.size() == ans.length() ? true : false;
    }
    std::cout << ans;
    return 0;
}
