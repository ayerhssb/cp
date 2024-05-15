#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string guest, host, letters, text;

    std::cin >> guest;
    std::cin >> host;
    std::cin >> letters;

    text = guest + host;
    sort(text.begin(), text.end());
    sort(letters.begin(), letters.end());

    if (text == letters)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}