#include <iostream>

using namespace std;

int main()
{
   long long n;
   std::cin >> n;
   if(n%2==0){
       std::cout << n/2 << std::endl;
   }
   if(n%2!=0){
       std::cout << -(n+1)/2 << std::endl;
   }
    return 0;
}


// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, num = 0;
//     std::cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             num = num + i;
//         }
//         if (i % 2 != 0)
//         {
//             num = num - i;
//         }
//     }
//     std::cout << num << std::endl;

//     return 0;
// }