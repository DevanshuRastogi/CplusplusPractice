#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s , e;
    int sumRev = 0;
    cin >> s >> e;
    // int number = 25;
    for(int i = s; i <=e ; i++){
    int rev = 0;
    int number = i;
    while (number > 0)
    {
        int remainder = number % 10;
        rev = rev * 10 + remainder;
        number = number / 10;
    }
    sumRev += rev;
    }

    cout<<sumRev;
    return 0;
}