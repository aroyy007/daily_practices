//1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

#include<stdio.h>
unsigned long factorial(int num)
{
    int i;

    unsigned long fact=1;
    for(i=num; i>=1; i--)
        fact= fact*i;
    return fact;
}
int main()
{
    int i,N;
    float sum;
        printf("Enter the value of N: ");
        scanf("%d",&N);
    sum=0.0f;
    for(i=1; i<=N; i++)
    sum = sum + ( (float)(i) / (float)(factorial(i)) );
    printf("Sum of the series is: %f\n",sum);

    return 0;
}
