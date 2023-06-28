#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,sum=0;
    cin>>n>>k>>m;
    int a[n];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int x=(n*m)-sum;
    if(x>k)
    {
        cout<<"-1"<<endl;
    }
    else if(x<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
}
