//array insert delete bubble sort linear search binary search
#include<iostream>
using namespace std;
int insert_(int a[],int size,int pos,int value)
{
    size++;
    for(int i=size;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    return size;
}

int delete_(int a[],int size,int pos)
{
    for(int i=pos;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    return --size;
}

void bubble(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

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

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    int a[size];

    cout<<"Enter elements : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"A["<<i<<"] : ";
        cin>>a[i];
    }

    int value = 100;
    int pos=3;

    cout<<"After Insert : ";
    int size2=insert_(a,size,pos,value);
    printarray(a,size2);
    cout<<endl;

    cout<<"After delete : ";
    int size1=delete_(a,size,pos);
    printarray(a,size1);

    cout<<endl;

    cout<<"Sorted Array : ";
    bubble(a,size1);
    printarray(a,size1);

    cout<<endl;

    int target;
    cout<<"Enter target : ";
    cin>>target;

    int choice;
    cout<<"How do want to find element ?"<<endl;
    cout<<"For Linear Search type 1"<<endl<<"For Binary Search type 2"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    if(choice==1)
    {
        int ind=linearsearch(a,size1,target);
        if(ind==-1)
        {
            cout<<"Not Found";
        }
        else
        {
            cout<<"Index found at "<<ind<<endl;
        }
    }

    else if(choice==2)
    {
        int ind=binarysearch(a,size1,target);
        if(ind==-1)
        {
            cout<<"Not Found";
        }
        else
        {
            cout<<"Index found at "<<ind<<endl;
        }
    }

    else
    {
        cout<<"Invalid Choice";
    }
    return 0;
}
