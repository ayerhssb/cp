#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n, count = 0;
    std::cin >> n;

    if (n >= 1 && n <= 100)
    {
        string word, lowerword;
        set<char> set;
        std::cin >> word;
        // lowerword = tolower(word);

        for (int i = 0; i < n; i++)
        {

            char c = tolower(word[i]);
            if (c >= 'a' && c <= 'z')
            {
                set.insert(c);
            }
        }

        if (set.size() == 26)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
