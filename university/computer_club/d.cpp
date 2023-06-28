#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    int d = a / b;
    int r = (a % b);
    double f = (double)a / b;
    cout<<d<<" "<<r<<" "<<fixed<<setprecision(5)<<f<<endl;
    return 0;
}
