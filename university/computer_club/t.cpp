#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long max=a[0];
    long long min=a[0];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        sum=sum+a[i];
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
}
