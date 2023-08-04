#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        string j, s;
        cin >> j >> s;
        int start = L - 1;
        int end = R - 1;

        while (start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
        cout << c << endl;
    }
}