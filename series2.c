#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a,b;
    printf("Enter n1 & n2 : ");
    scanf("%d %d",&n1,&n2);


    for(a=1, b=2;a<=n1 && b<=n2 ;a++ , b++)
    {
        sum = sum+a*b;
    }
    printf("1.2 + 2.3 + 3.4 +...%d.%d = %d\n",n1,n2,sum);
    return 0;
}
