#include <iostream>

using namespace std;

int main()
{
    
    int n, k; 
    std::cin >> n;
    std::cin >> k;
    
    for (int i = 0; i < k; i++) {
        if(n%10 != 0){
            n = n-1;
        }
        else{
            n = n/10;
        }
    }
    
    std::cout << n << std::endl;

    return 0;
}