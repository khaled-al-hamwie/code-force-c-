#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int current = 0;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        int exiting;
        std::cin >> exiting;
        int coming;
        std::cin >> coming;
        current += -exiting + coming;
        if (current > answer)
            answer = current;
    }
    std::cout << answer;
    return 0;
}
