#include<stdio.h>
int main()
{
    int i,j,identity=1,a[3][3];
    printf("Enter matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Loading...\n....\n...\n..\n.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                identity = 0;
                break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                identity = 0;
                break;
            }
        }
    }
    if(identity)
    {
        printf("Identity Matrix");
    }
    else
    {
        printf("Not Identity Matrix");
    }

}
