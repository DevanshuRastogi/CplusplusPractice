#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
     int i = 0;
     int j = i+1;
        int temp;
        int k = 3;
        for(int b = 0 ; b< k ; b++){
            temp = nums[nums.size()-1];
            nums[j] = nums[i];
            nums[0]=temp;
            i++;
            j++;
        }
        for(int i : nums){
            cout<<i<<"\t";
        }

}