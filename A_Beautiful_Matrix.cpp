#include <iostream>
#include <cmath>

using namespace std;




int main()
{
    int x, res;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> x;
            if(x==1){
                 res = abs(i-2) + abs(j-2);
            }
            else{
                continue;
            }
        }
    }
    
    std::cout << res << std::endl;
}
