#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};

    int l = sizeof(arr) / sizeof(int);
    int l2 = sizeof(arr2) / sizeof(int);
    int maxSum = INT_MIN;
    int pairSum;
    for(int i = 0 ; i< l;i++){
        for(int j = 0 ; j< l2 ; j++){
           pairSum =arr[i]+arr2[j];
           maxSum = max(maxSum,pairSum);
        }
    }
   cout<< maxSum;
}
// 6 7 8 9 7 8 9 10 8 9 10 11 9 10 11 12