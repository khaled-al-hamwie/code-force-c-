#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
int main(int argc, char const *argv[])
{
    std::string input;
    std::cin >> input;

    std::vector<int> numbers;
    std::stringstream ss(input);
    int i;
    char c;
    while (ss >> i)
    {
        numbers.push_back(i);
        if (ss.peek() == '+')
        {
            ss >> c;
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::string results = "";
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i == numbers.size() - 1)
        {
            results += std::to_string(numbers[i]);
        }
        else
            results += std::to_string(numbers[i]) + "+";
    }
    std::cout << results;

    return 0;
}
