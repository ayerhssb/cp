#include <iostream>
#include <cmath>


void function_x(){
    int arr[3],dist, mindist = 100;
    for (int i = 0; i < 3; i++) {
        std::cin >> arr[i];
    }
    
    
    for (int i = 0; i < 3; i++) {
        /* code */
        dist = abs(arr[i]-arr[0]) + abs(arr[i]-arr[1]) + abs(arr[i]-arr[2]);
        if(dist < mindist){
            mindist = dist;
        }
    }
    std::cout << mindist << std::endl;
    
    
}

int main()
{
    int TC=1;
    std::cin >> TC;
    while(TC--){
        function_x();
    }

    return 0;
}