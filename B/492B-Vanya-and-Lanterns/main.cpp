#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, l;
    vector<int> a;
    std::cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    double redius;
    for (int i = 0; i < a.size() - 1; i++)
    {
        double temp = abs(a[i + 1] - a[i]) / 2.0;
        if (temp > redius)
            redius = temp;
    }
    if (a.back() != l && abs(a.back() - l) > redius)
    {
        redius = abs(a.back() - l);
    }
    if (a.front() != 0 && abs(a.front()) > redius)
    {
        redius = abs(a.front());
    }

    std::cout << std::fixed
              << redius;

    return 0;
}
