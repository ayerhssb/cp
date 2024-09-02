class Solution {
public:
    double myPow(double x, int n) {

         double ans = 1.0; long long nn = n;
       if(nn <0) nn=-1*nn;
       while(nn){
        if(nn%2 ==0){
            x = x*x; nn = nn/2;
        }
        else{
            ans = ans*x; nn = nn-1;
        }
       }
       if(n<0) ans = (double)(1.0)/(double)(ans);
       return ans;


        // if(n==0) return 1;
        // if(n<0) return 1/(myPow(x, -n));
        // if(n%2) return x * myPow(x, n-1);
        // return myPow(x*x, n/2);

        // double ans= 1.0;

        // double xx = (x<0) ? (-1*x) : x;
        // long long nn = (n<0) ? (-1*n) : n;

        // for(int i=0; i<nn; i++){
        //     ans = ans * xx;
        // }

        // while(nn){
        //     if(nn%2){
        //         ans = ans * xx;
        //         nn = nn-1;
        //     }
        //     else{
        //         xx = xx * xx;
        //         nn = nn/2;
        //     }
        // }

        // if(n<0) ans = 1.0/ans;

        // if(n%2 !=0 && x<0) return (-1 * ans);

        // return ans;
    }
};
