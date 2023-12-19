#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    std::cin >> str1;
    str1[0] = toupper(str1[0]);
    std::cout << str1 << std::endl;

    return 0;
}