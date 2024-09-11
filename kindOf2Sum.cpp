#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] ={1 , 2 , 4 , 0 , 3};
int sumK = 3;
int n = sizeof(arr)/sizeof(int);
vector<pair<int , int>> vp ;
unordered_set <int> st;
for(int i = 0 ; i<n;i++ ){
    int temp =  sumK - arr[i] ;
    if(st.find(temp)!=st.end()) {
        vp.push_back({arr[i],temp});
    }

    st.insert(arr[i]);
    
}
    int count=0;
 for(auto i : vp){
    cout<< "{" << i.first << "," << i.second <<"}"<<endl;
    count++;
 }
 cout<< count;
}