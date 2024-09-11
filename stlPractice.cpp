#include<bits/stdc++.h>
#include<vector>
using namespace std;

void display(vector<vector<int>> &v){
    cout<< "vector 2d size is : "<< v.size() <<endl;
    for(int i = 0 ; i< v.size();i++){
       for(int j = 0 ; j < v[i].size();j++){
       cout<<v[i][j];
       }
       cout<< endl;
    }
    
}
int main(){

vector<vector<int>> v ;
int N;
cin>>N;
for(int i = 0; i< N; i++){
vector <int>  tp;
    int n ;
    cin>> n;
    for(int j = 0; j< n; j++){
        int x;
        cin>>x;
        tp.push_back(x);
    }
    v.push_back(tp);
}
    display(v);
}
