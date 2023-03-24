#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,uppsum = 0, lowsum = 0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                printf("%d ",a[i][j]);
                uppsum = uppsum + a[i][j];
            }
            else
            {
                printf("%d ",a[i][j]);
                lowsum = lowsum + a[i][j];
            }
        }
    }
    printf("\nSum of upper triangle elements : %d \n", uppsum);
    printf("\nSum of lower triangle elements : %d \n", lowsum);
}
