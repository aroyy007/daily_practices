#include<stdio.h>
int main()
{
    int i,j,equal=1,a[10][10],b[10][10];
    printf("Enter First Matrix : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Matrix A[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix A is : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }
    printf("Enter Second Matrix : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Matrix B[%d][%d] : ", i, j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix B is : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d ",b[i][j]);

        }
        printf("\n");
    }
    printf("Calculation started .... please wait...\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                equal = 0;
            }
        }
    }
    if(equal == 1)
    {
        printf("Matrix A is equal to Matrix B");
    }
    else
    {
        printf("Matrix A is not equal to Matrix B");
    }
}
