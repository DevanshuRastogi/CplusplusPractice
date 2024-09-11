#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,3,4,5};
    int l = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i< l;i++){
        for(int j = i+1 ; j< l ; j++){
            cout<<arr[i]+arr[j] << ", ";
        }
    }
   
}
