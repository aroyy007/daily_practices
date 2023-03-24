#include<stdio.h>
int main()
{
    int a[10][10],trans[10][10],i,j,row,colm;

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d",&row,&colm);
    printf("Enter matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            trans[i][j] = a[j][i];
        }
        printf("\n");
    }
    printf("Transpose Matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf(" %d ",trans[i][j]);
        }
        printf("\n");
    }
}
