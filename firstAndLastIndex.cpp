#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2 , 3, 8 , 9 , 10 , 8 , 14};

    int l = sizeof(a)/ sizeof(int);
    int firstOccur = -1;
    int lastOccur = -1;
    int target = 8;
    for(int i = 0; i < l ; i++ ){
        if(a[i] == target) {
            firstOccur = i;
            break;
        }

        for(int i = l-1 ; i >= 0 ; i--){
            if(a[i]==target){
                lastOccur = i;
                break;

            }
        }
    }
    cout<< firstOccur << "\t"  << lastOccur ;
}