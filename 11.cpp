#include <iostream>

using namespace std;

int main()
{
    int x;
    std::cin >> x;

    int steps = x / 5;
    int rem = x % 5;

    if (rem != 0)
    {
        steps = steps + 1;
    }

    std::cout << steps << std::endl;

    return 0;
}