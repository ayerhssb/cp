#include <iostream>

using namespace std;

int main()
{
    int n, p[100], q[100], count = 0;
    std::cin >> n;

    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            std::cin >> p[i];
            std::cin >> q[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (q[i] - p[i] >= 2)
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}