#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2, 3, 2, 4, 6, 6, 5, 6, 4, 5};
    int l = sizeof(a) / sizeof(int);
    bool b[l] = {false};

    for (int i = 0; i < l; i++)
    {
        if (b[i] == false)
        {
            int count = 0;
            b[i] = true;
            count++;
            for (int j = i + 1; j < l; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    b[j] = true;
                }
            }
            cout << a[i] << "-> " << count;
        }
        cout << endl;
    }
}