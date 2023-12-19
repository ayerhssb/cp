#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    int count = 0;

    std::cin >> str1;
    std::cin >> str2;

    // making all strings to uppercase

    for (int i = 0; i < str1.length(); i++)
        str1[i] = toupper(str1[i]);

    for (int i = 0; i < str2.length(); i++)
        str2[i] = toupper(str2[i]);

    // comparing two strings

    for (int i = 0; i < str1.length(); i++)
    {

        if (str1[i] == str2[i])
        {
            continue;
        }
        else if (str1[i] > str2[i])
        {
            count = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            count = -1;
            break;
        }
    }
    cout << count;

    return 0;
}
