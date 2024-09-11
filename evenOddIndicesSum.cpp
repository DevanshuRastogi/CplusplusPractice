#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = sizeof(arr) / sizeof(int);
   int sumEvenI =0 ,sumOddI = 0;
   for(int i = 0 ; i< l ; i++){
    if(i%2==0) sumEvenI+=i;
    else sumOddI+=i;

   }

   cout<< sumEvenI <<"\t" << sumOddI;
}
