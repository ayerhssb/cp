#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    std::cin >> n;

    string love = "I love ";
    string hate = "I hate ";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << hate;
        }
        else
        {
            std::cout << love;
        }

        if (i == n || n == 1)
        {
            break;
        }

        std::cout << "that ";
    }

    std::cout << "it";
    return 0;
}