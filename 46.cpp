#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string name;
    map<char, int> mpp;
    std::cin >> name;
    for (int i = 0; i < name.size(); i++)
    {
        mpp[name[i]]++;
    }

    if (mpp.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}