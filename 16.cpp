#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, countA = 0, countD = 0;
    string str;

    std::cin >> n;
    std::cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }

    if (countA > countD)
    {
        std::cout << "Anton" << std::endl;
    }
    else if (countA < countD)
    {
        std::cout << "Danik" << std::endl;
    }
    else
    {
        std::cout << "Friendship" << std::endl;
    }

    return 0;
}
