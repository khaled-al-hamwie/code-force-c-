#include <iostream>

int main(int argc, char const *argv[])
{
    int meta[2];
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        std::cin >> meta[i];
    }
    int participant[meta[0]];
    int score;
    for (int i = 0; i < meta[0]; i++)
    {
        std::cin >> participant[i];
        if (i + 1 == meta[1])
        {
            score = participant[i];
        }
    }

    for (int i = 0; i < meta[0]; i++)
    {
        if (participant[i] > 0 && participant[i] >= score)
        {
            count++;
        }
    }

    std::cout << count;
    return 0;
}
// go the k-th place , get the score , then count everybody how get this score and positive