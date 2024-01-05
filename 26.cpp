#include <iostream>

int main()
{
    int n;
    float pure = 0.0, ratio, arr[100];
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        pure = pure + (arr[i] / 100);
    }
    ratio = (pure / n) * 100;
    std::cout << ratio << std::endl;

    return 0;
}
