#include <bits/stdc++.h>
using namespace std;
int main()
{

    int start, end;
    cin >> start >> end;

    int primeNumberCounter = 0;
    for (int i = start; i <= end; i++)
    {

        int counter = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
             
            }
        }
            if (counter == 2){
                primeNumberCounter++;
                cout<<i << "\t";
            }

    }
        cout<< endl;
        cout << primeNumberCounter;
}