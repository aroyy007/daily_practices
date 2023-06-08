#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int size,int target)
{
    int low=0;
    int high=size-1;
    int ind=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==target)
        {
            ind=mid;
            break;
        }

        else if(a[mid]<target)
        {
            low=mid+1;
        }
        
        else
        {
            high=mid-1;
        }
    }
    return ind;
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

    sort(a,a+size); //sorting the array special function

    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ind=binarysearch(a,size,target);
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
