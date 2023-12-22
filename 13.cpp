#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int countupper = 0, countlower = 0;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            countupper++;
        }
        else
        {
            countlower++;
        }
    }

    if (countupper > countlower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }

        std::cout << s << std::endl;
    }
    else
    {

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }

        std::cout << s << std::endl;
    }

    return 0;
}