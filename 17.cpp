#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a1, a2, a3, a4, count = 0;
    string str;

    std::cin >> a1 >> a2 >> a3 >> a4;
    std::cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case '1':
            count += a1;
            break;
        case '2':
            count += a2;
            break;
        case '3':
            count += a3;
            break;
        case '4':
            count += a4;
            break;
        }
    }
    std::cout << count << std::endl;
    return 0;
}