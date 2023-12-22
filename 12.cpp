#include <iostream>

using namespace std;

int main()
{
    int k, n, w, cost = 0, toborrow, money = 0;
    std::cin >> k;
    std::cin >> n;
    std::cin >> w;

    if (1 <= k && w <= 1000)
    {
        for (int i = 1; i <= w; i++)
        {
            cost = cost + i * k;
        }

        toborrow = cost - n;

        if (toborrow > 0)
        {
            std::cout << toborrow << std::endl;
        }
        else
        {
            std::cout << money << std::endl;
        }
    }

    return 0;
}