#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void timeConversion(string s) {
    string s2;
    if(s.find("PM"))  strncpy(s2 , s+0 ,s+0 - s+1)
    cout<< s.erase(8,10);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);
timeConversion(s);
    //  result = timeConversion(s);

    // fout << result << "\n";

    // fout.close();

    return 0;
}
