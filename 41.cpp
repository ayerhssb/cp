#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t, num[3], mini, divi, op;
    std::vector<string> ans;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int op = 0;
        for (int j = 0; j < 3; j++)
        {
            std::cin >> num[j];
        }

        for (int k = 0; k < 3; k++)
        {
            mini = min(min(num[0], num[1]), num[2]);
            if (num[k] % mini == 0)
            {
                divi = num[k] / mini;
                op += divi - 1;
            }
            else
            {
                op = 100000;
            }
        }

        if (op <= 3)
        {
            ans.push_back("YES");
        }
        else
        {
            ans.push_back("NO");
        }
    }

    for (auto i : ans)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
