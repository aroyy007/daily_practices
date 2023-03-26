//C program to find upper triangular matrix
#include<stdio.h>
int main()
{
    int i,j,upp=1,a[3][3];
    printf("Enter matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Calculation started .... please wait...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j && a[i][j]!=0)
            {
                upp = 0;
            }
        }
    }
    if(upp == 1)
    {
        printf("The matrix is upper trianglar matrix. \n");
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf(" %d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The matrix is not upper trianglar matrix. \n");
    }
}
