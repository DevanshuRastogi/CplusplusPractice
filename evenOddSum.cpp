#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = sizeof(arr) / sizeof(int);
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
        
    }
    cout << evenSum << " " << oddSum;
}
