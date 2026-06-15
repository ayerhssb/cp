typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll len=0;
        ll l=1, r= 1;
        while(r<=n){
            if((n%(r))==0){
                len = r;
            }else{
                break;
            }
            r++;
        }
        cout<<len<<"\n";
        
    }

    return 0;
}
