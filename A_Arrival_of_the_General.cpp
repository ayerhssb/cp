// #include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

int main(){

    int n, b, max = INT_MIN, min = INT_MAX, indexmax,indexmin, ans;
    int arr[100];
    cin>> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // arr.push_back(b);
        if(arr[i]>max) {max = arr[i]; indexmax = i;}
        if(arr[i]<=min) {min = arr[i]; indexmin = i;}
    }

    if(indexmax<=indexmin){
        ans = (indexmax) + (n-1-indexmin);
    }
    else{ans = (indexmax) + (n-1-indexmin) - 1;}

    cout << ans;
    
    

    return 0;
}