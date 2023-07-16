#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string zz = "codeforces";
        string aa;
        bool bb = false;
        cin >> aa;

        for (int i = 0; i < zz.size(); i++)
        {
            if (zz[i] == aa[0])
            {
                bb = true;
                break;
            }
        }

        if (bb)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
