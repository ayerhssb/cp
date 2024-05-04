#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#define int long long
using namespace std;


// void solve()
// {
//     int n,m, count1 = 0, count0 = 0,j;
//     string a,b;
//     std::cin >> n >> m;
//     std::cin >> a;
//     std::cin >> b;
    
//     for (int i = 0; i < m; i++) {
//         if(b[i]=='1'){
//             count1++;
//         }
//         else{
//             count0++;
//         }
//     }
    
//    if(count1!=0 && count0!=0){
       
//         j=0;
//     while(count1!=0 && count0!=0){
        
//         if(a[j]=='1'){
//             count1--;
//         }
//         else{
//             count0--;
//         }
//         j++;
//     }
       
//    }
   
//    else if(count0 ==0){
//         j=0;
//        if(a[j]== '1'){
//            j++;
//        }
//     //   else{
//     //       break;
//     //   }
//    }
   
//    else{
//        j=0;
//        if(a[j]== '0'){
//            j++;
//        }
//     //   else{
//     //       break;
//     //   }
//    }

    
//     std::cout << j << std::endl;
    
// }



void solve()
{
    int n,m;
    string a,b;
    std::cin >> n >> m;
    std::cin >> a;
    std::cin >> b;
    


    int j=0, ans = 0;
    for (int i = 0; i < m && j<n; i++) {
        if(b[i] == a[j]){
            ++j;
            ++ans;
        }
    }

    
    std::cout << ans << std::endl;
    
}

int32_t main()
{
    int TC = 1;
    cin >> TC;
    while (TC--)
    {
        solve();
    }
}
