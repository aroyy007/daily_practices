#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selection_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

void insertion_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }
}
int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return i + 1;
}

void quick_sort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}

void merge(vector<int> &a, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i = 0; i < n1; i++)
    {
        L[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void printArray(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : " << endl;
    cout << "----------------------------------" << endl;

    vector<int> a(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at " << i << " index : ";
        cin >> a[i];
    }

    cout << "----------------------------------" << endl;

    cout << "How you want to sort the array : " << endl;
    cout << "If Bubble Sort then click 1" << endl;
    cout << "If Selection Sort then click 2" << endl;
    cout << "If Insertion Sort then click 3" << endl;
    cout << "If Quick Sort then click 4" << endl;
    cout << "If Merge Sort then click 5" << endl;

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        bubble_sort(a);
        break;
    case 2:
        selection_sort(a);
        break;
    case 3:
        insertion_sort(a);
        break;
    case 4:
        quick_sort(a, 0, size - 1);
        break;
    case 5:
        merge_sort(a, 0, size - 1);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    cout<<endl<<"-----------------------------"<<endl;

    cout << "Sorted array is : ";
    printArray(a);

    cout<<endl<<"-----------------------------"<<endl;

    int key;
    cout << "Enter the Key to be searched : ";
    cin >> key;

    //Binary Search
    int low = 0;
    int high = size - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(a[mid]==key)
        {
            cout<<"Key is found at "<<mid<<" index";
            return 0;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<"Key is not found";
    return 0;
}
