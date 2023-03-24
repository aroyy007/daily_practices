#include<stdio.h>
int main()
{
    int first[10][10],sec[10][10],res[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter rows and column for first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error. Enter element again\n");
        printf("Enter rows and column for first matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and column for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    printf("Enter first matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("Enter second matrix : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Second[%d][%d] = ",i,j);
            scanf("%d",&sec[i][j]);
        }
    }
    printf("First matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" %d ",first[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf(" %d ",sec[i][j]);
        }
        printf("\n");
    }
    printf("Multiplications of two matrix : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k] * sec[k][j];
            }
            res[i][j] = sum;
        }
    }
    printf("Second matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf(" %d ",res[i][j]);
        }
        printf("\n");
    }
}
