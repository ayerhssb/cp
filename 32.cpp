#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int t, n, count;
    vector<long long int> arr;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        if (n == 1 || n == 2)
        {
            count = 0;
        }
        else if (n % 2 != 0)
        {
            count = n / 2;
        }
        else
        {
            count = (n / 2) - 1;
        }
        arr.push_back(count);
    }

    for (auto i : arr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
