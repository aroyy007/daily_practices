#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size]; 
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    sort(a,a+size); //sorting the array

    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    int target;
    cin>>target;
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
