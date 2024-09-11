#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[] = {12,2,3,2,10,30};
    unordered_map<int , int>hashmap;
    int hash[30]={0};
    for(int i : arr){
        hashmap[i] +=1;
    }
    
    int query;
    cin>>query;
    for(int i=0;i<query;i++){
        int input;
        cin>>input;
        cout<<hashmap[input]<<endl;
    }

}
