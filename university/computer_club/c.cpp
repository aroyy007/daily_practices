#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int hours = s / 3600;
    int minutes = (s % 3600) / 60;
    int seconds = (s % 3600) % 60;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}
