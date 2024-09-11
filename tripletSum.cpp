#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[] = {1,2,3,4,5,6};
    int adder = 0;
    int sumTillNow =0;
    int l = sizeof(a)/sizeof(int);
    for (int i = 0; i < l-1 ; i++){
        for(int j = i+1; j < l-1 ; j++){
            for(int  k = j+1 ; k < l ; k++){
                adder = a[i] + a[j] + a[k] ;
                cout<< a[i] << " " << a[j] << " "<< a[k] << " : their sum =  " << adder << endl;
                sumTillNow +=adder;
            }
        }
    }
    cout<<sumTillNow;
}

// 1 2 3   1 2 4  1 2 5 1 2 6
// 1 3 4 135 136
// 145 146
//156


// 2 3 4    2 3 5   236
// 345  346
//456   