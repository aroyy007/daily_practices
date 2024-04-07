#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to solve the knapsack problem
void knapsack(int n, vector<float> weight, vector<float> profit, float capacity)
{
    vector<float> x(n, 0); // Vector to store the 0 in each item in the knapsack
    float tp = 0; // Total profit
    int i;

    for (i = 0; i < n; i++)
    {
        // If the weight of the item is more than the capacity, break the loop
        if (weight[i] > capacity)
        {
            break;
        }
        else
        {
            
            x[i] = 1;
            tp += profit[i]; 
            capacity -= weight[i]; 
        }
    }

    // If there is still capacity left in the knapsack
    if (i < n)
    {
        // Add a fraction of the next item to the knapsack
        x[i] = capacity / weight[i];
        tp += x[i] * profit[i];   
    }

    cout << endl<<endl;

    cout << "The result is : ";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl<<endl;

    // Print the total profit
    cout << "The total profit is : " << tp << endl;
}

int main()
{
    vector<float> weight(20), profit(20), ratio(20);
    float temp, capacity;
    int num;


    cout << "Enter the number of items : ";
    cin >> num;

    cout << "Enter the weight and profit of each items : ";
    for (int i = 0; i < num; i++)
    {
        cin >> weight[i] >> profit[i];
    }

    cout << "Enter the capacity of knapsack : ";
    cin >> capacity;

    // Calculate the ratio of profit to weight for each item
    for (int i = 0; i < num; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    // Sort the items in descending order of ratio using selection sort
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(ratio[i]<ratio[j])
            {
                // Swap the ratio
                swap(ratio[i],ratio[j]);

                // Swap the weight
                swap(weight[i],weight[j]);

                // Swap the profit
                swap(profit[i],profit[j]);
            }
        }
    }

    // Call the knapsack function
    knapsack(num, weight, profit, capacity);

    return 0;
}
