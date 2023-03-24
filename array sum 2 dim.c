#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    printf("Enter first matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrices are : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
                c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}
