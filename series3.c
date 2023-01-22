#include<stdio.h>
int main()
{
    while(1)
    {
        int i,n,sum=0,f=1;
    printf("Enter last digit : ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum = sum+f*i;
    }
    printf("1 + 2^2 + 3^2 + ... %d^2 = %d\n",n,sum);
    return 0;
    }
}
