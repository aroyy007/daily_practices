#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[m][1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cin >> b[i][j];
        }
    }

    int c[n][1],sum;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<1;j++)
        {
            sum=0;
            for(int k=0;k<m;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<1;j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;
    }

}
