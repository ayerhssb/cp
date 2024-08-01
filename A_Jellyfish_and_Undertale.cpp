#include <iostream> 
#include <cstdint>
#define int long long

using namespace std;

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int ans=b;
    for(int i=0; i<n; ++i) 
    {
        int x;
        cin>>x;
        ans+=min(x,a-1);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}









// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int t, a, b, x, c, n, count=0;

//     // int *x= new int(n);
//     std::cin >> t;

//     vector<int> x1(n);
//     vector<int> a1(n);
//     vector<int> b1(n);
//     vector<int> count1(t);

    
//     for (int j = 0; j < t; j++)

//     {

//         std::cin >> a >> b >> n;
//         a1.push_back(a);
//         b1.push_back(b);

//         for (int i = 0; i < n; i++)

//         {
            
//             std::cin >> x;

//             x1.push_back(x);
//         }
        
//     }

//     for (int j = 0; j < t; j++)

//     {

//         // count = 0;

//         c = b1[j];

//         for (int i = 0; i < n; i++)

//         {

//             c = min(a1[j], x1[i] + c);
//             // count++;
//             // c--;

//             while (c > 1)
//             {
//                 count++;
//                 c--;
//             }
//             // std::cout << count << std::endl;

//             continue;
//         }

//         while (c != 0)

//         {

//             c--;

//             count++;
//         }

//         count1.push_back(count);
//         std::cout << count << std::endl;
//     }
    
//     // for (int i=0; i<t; i++) {
//     //     std::cout << count1[i] << std::endl;
//     // }

//     return 0;
// }
