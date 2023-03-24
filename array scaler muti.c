//scalar multiplication of matrix
#include<stdio.h>
int main()
{
    int i,j,n,a[2][2],b[2][2],c[2][2];
    printf("Enter first matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number to multiply : \n");
    scanf("%d",&n);
    printf("result of scalar multiplication of matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
                a[i][j] = n * a[i][j];
                printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

}
