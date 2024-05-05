#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#define int long long
using namespace std;

void solve(){
    int num;
    string x;
    cin>> x;

    for (int i = 0; i < x.size(); i++) {
        if(i==0 && x[0]>='5'&& x[0]<'9') x[0] = '9'-x[0] +'0';
        else if (i>0 && x[i]>='5') x[i] = '9' - x[i] + '0';
    }

    num = stoi (x);
    std::cout << num;
    

}

int32_t main(){
    int TC=1;
    cin>>TC;
    while(TC--){
        solve();
    }

}