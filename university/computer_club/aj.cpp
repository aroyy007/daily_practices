#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string zz="codeforces";
        string aa;
        cin >> aa;
        int count = 0;

        for (int i = 0; i < aa.size(); i++)
        {
            if (aa[i] != zz[i])
            {
                count++;
                
            }
        }

        cout << count << endl;
    }

    return 0;
}
