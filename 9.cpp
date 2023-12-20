#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int number, count=0;
    std::cin >> number;
    std::cin >> str;
    
    
    
    
        for (int i = 0; i < (str.length()-1); i++) {
            if (str[i] == str[i+1]){
                count++;
            }
            else {
                continue;
            }
        }
    
    
       std::cout << count << std::endl;

    return 0;
}