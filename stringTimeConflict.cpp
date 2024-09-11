#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> event1 = {"10:00","11:00"}, event2 = {"14:00","15:00"};
        
        vector<int> temp1;
        // vector<int> temp2;
    for(auto i =0 ; i < event1.size(); i++){
        int k ;
        // for(auto j = 0 ; j < event1[i].size();j++){
            
        // }

        int hours ,  minute ;
        char c ;
        stringstream ss(event1[i]) ;
        ss >> hours >> c >> minute;

         k = hours *100 + minute;
        // cout<<k << endl;
        temp1.push_back(k);
        
    }
    for(auto i =0 ; i < event2.size(); i++){
        int k ;
        // for(auto j = 0 ; j < event1[i].size();j++){
            
        // }

        int hours ,  minute ;
        char c ;
        stringstream ss(event2[i]) ;
        ss >> hours >> c >> minute;

         k = hours *100 + minute;
        // cout<<k << endl;
        temp1.push_back(k);
        
    }

    for(int i: temp1){cout<< i << " "<< endl;}
    // for(int i: temp){cout<< i << " "<< endl;}

    if(temp1[1]>=temp1[3] )return true;
    else return false;
}