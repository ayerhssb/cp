#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#define int long long
using namespace std;


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}

void solve()
{
    int x, gcd1,result, maxi=-1;
     cin>> x;
        vector<int> arr;
        // y -> 1 to x
    for (int i = 1; i < x; i++)
    {
        gcd1 = gcd(i,x);
        
        if(gcd1+i>maxi){
            maxi = gcd1+i;
            result = i;
        }
    }
    std::cout << result << endl;
    
    
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
