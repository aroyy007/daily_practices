//1^2 * 2^2 * 3^2 *....

#include<stdio.h>
int main()
{
    while(1)
    {
       int i,n,result=1;
       printf("Enter Number: ");
       scanf("%d",&n);

       for(i=1 ; i<=n ; i++)
       {
        result=result*i*i;
        if(i==1)
        {
            printf("\n1 x ", i);
        }
        else if(i==n)
        {
            printf("%d^2 ",i);
        }
        else
        {
            printf("%d^2 x ",i);
        }
       }
       printf(" = %d\n", result);
    }
    return 0;
}
