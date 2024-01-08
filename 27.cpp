#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n1, n2;
    std::cin >> n1;
    std::cin >> n2;
    int arr[100];

    int len = n1.size();

    for (int i = 0; i < len; i++)
    {
        if ((n1[i] == '0' && n2[i] == '0') || (n1[i] == '1' && n2[i] == '1'))
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}