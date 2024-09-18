#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t, s;
    int count =0;
    std::cin >> s;
    std::cin >> t;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == t[s.length()-1-i]){
            count++;
        }
    }
    if(count == t.length()){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }

    return 0;
}
