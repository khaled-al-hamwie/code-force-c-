#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 0;
    std::cin >> n;
    int total = 0, me = 0, count = 0;
    vector<int> coins;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        coins.push_back(temp);
        total += temp;
    }
    sort(coins.begin(), coins.end(), greater<int>());
    while (me <= total)
    {
        int biggest = coins.at(0);
        total = total - biggest;
        me += biggest;
        coins.erase(coins.begin());
        count++;
    }
    std::cout << count;
    return 0;
}
