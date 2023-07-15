#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, R;
    string S;
    cin >> L >> R >> S;

    for (int i = L - 1, j = R - 1; i < j; i++, j--)
    {
        swap(S[i], S[j]);
    }

    cout << S << endl;

    return 0;
}
