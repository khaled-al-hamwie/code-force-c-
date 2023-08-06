#include <iostream>
#include <vector>
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

    while (me <= total)
    {
        int biggest = 0;
        int pos = -1;
        for (int i = 0; i < coins.size(); i++)
        {
            if (coins.at(i) > biggest)
            {
                biggest = coins.at(i);
                pos = i;
            }
        }
        total = total - biggest;
        me += biggest;
        coins.at(pos) = 0;
        pos = -1;
        count++;
    }
    std::cout << count;
    return 0;
}
