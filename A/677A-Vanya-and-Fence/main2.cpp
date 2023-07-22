#include <iostream>
using namespace std;

int n, h, i, a, ans;
int main(int argc, char const *argv[])
{
    std::cin >> n >> h;
    ans = n;
    for (i = 0; i < n; i++)
    {
        std::cin >> a;
        ans += (a > h);
    }
    std::cout << ans;

    return 0;
}
