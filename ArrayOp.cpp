#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1 , 2 , 2 ,1,1,0};
     vector<int> answer(nums.size(),0);
        for(int i = 0 ; i <  nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i] *=2;
                nums[i+1]=0;
            }
            // else continue;
            // answer.push_back(nums[i]);
        } 
        // answer.push_back(nums.back());
//         auto i = 0;
//         auto j = answer.size()-1;
//         while(i<=j){
//             if(answer[i]==0){
//                 int temp = answer[i];
//                 answer[i] = answer[j];
//                 answer[j] =temp;
//                 j--;
//             }    
//             else i++;    
            
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i]!=0) answer[i]=nums[i];
            }
        

        for(int it : answer){
            cout<< it <<" ";
        }
}