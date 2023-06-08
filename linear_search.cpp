#include<iostream>
using namespace std;
int linearsearch(int a[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==target)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int a[size];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ind=linearsearch(a,size,target);
    if(ind!=-1)
    {
        cout<<"Found at index "<<ind<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}
