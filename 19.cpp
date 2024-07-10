#include <iostream>

using namespace std;

int main()
{
    int n, h, a[1000], count = 0;
    std::cin >> n;
    std::cin >> h;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
        {
            count++;
        }
        else
        {
            count = count + 2;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
