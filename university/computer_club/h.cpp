#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,m,n,p;
    cin>>a>>b>>c;
  
    m=max(max(a,b),c);
  
    n=min(min(a,b),c);
  
    p=(a+b+c)-(m+n);
  
    cout<<n<<" "<<p<<" "<<m<<endl;
  
    return 0;
}
