#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    vector<int> arr1;
    int num[100000];

    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < t;)
    {
        int x = 1, sum = 0, digits = 0;
        string num_str = to_string(num[i]);
        int len = num_str.size();
        while (x <= len)
        {
            digits = num[i] % ((int)(pow(10, x))) - sum;
            sum = sum + digits;
            if (digits != 0)
            {
                arr1.push_back(digits);
                //   std::cout << digits<< " ";
            }
            x++;
        }

        std::cout << arr1.size() << std::endl;
        for (auto i : arr1)
        {
            std::cout << i << " ";
        }
        // 	for (int i = 0; i < arr1.size(); i++) {
        // 	    std::cout << arr1[i] << " ";
        // 	}
        std::cout << std::endl;
        i++;
        arr1.clear();
    }
    return 0;
}
