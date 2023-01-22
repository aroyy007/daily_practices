//1+2+3+....    ...n
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter last digit : ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        sum = sum+i;
            if(i==1)
        {
                printf("\n1 + ", i);
        }
            else if(i==n)
        {
                printf("%d ",i);
        }
            else
        {
                printf("%d + ",i);
        }
    }
    printf("= %d\n",sum);
    return 0;
}
