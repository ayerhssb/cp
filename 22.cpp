#include <iostream>

using namespace std;

int main()
{
    int n, arr[100000], count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
            continue;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
