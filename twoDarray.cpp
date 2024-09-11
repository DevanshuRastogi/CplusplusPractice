#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr ={ {1,2,3},{4,5,6},{9,8,9}};
    int leftToRightSum=0;
    int rightToLeftSum=0;
int n = arr.size();
int m = arr[0].size();
    for(int i = 0; i <n ;i++){
        for (int j = 0; j<m; j++) {

            if(i==j){
               leftToRightSum +=arr[i][j]; 
            }


            if(j==0&&i==n-1 ||i==0&&j==m-1 || (i==j&&i==n/2)  ) 
            rightToLeftSum+=arr[i][j];
            
        }
    }
    cout<<leftToRightSum;
    cout<<rightToLeftSum;


    int diff = leftToRightSum - rightToLeftSum;
    cout<< -(diff) ;
} 