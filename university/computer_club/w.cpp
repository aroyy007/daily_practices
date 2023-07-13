#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a;
        cin >> a;
        if (a <= 10)
        {
            cout << 0 << " " << a << endl;
        }
        else
        {
            cout << 10 << " " << a - 10 << endl;
        }
    }
}
