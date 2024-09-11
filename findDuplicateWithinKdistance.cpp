#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {10, 5, 3,5 , 3,4 , 6};
int n = sizeof(arr)/sizeof(int);
int k =3;
unordered_map<int,int> mp ;

for(int i = 0 ; i< n ; i++){
    if(mp.find(arr[i])==mp.end()){
        mp[arr[i]] = i;

    }

    else{

        if(i-mp[arr[i]] <=k) cout<< "duplicate at positions " << i <<" & " << mp[arr[i]]<< endl;

        mp[arr[i]]=i;
    }
}
        return 0;

cout<<"no duplicates";

return 0;
}