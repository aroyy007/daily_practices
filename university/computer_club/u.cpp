#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    while (cin >> x && x != "0")
    {
        int sum = 0;
        for (char digit : x)
        {
            sum += digit - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
