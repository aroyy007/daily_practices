#include<stdio.h>
int main()
{
    int a[3][3], det;
    printf("Enter Matrix : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);

        }
        printf("\n");
    }
    int d = a[0][0], e = a[1][1], f = a[2][2];
    int g = a[1][0], h = a[2][0], i = a[2][1];
    det = (d*(e*f - i*h)) - (g*(e*i - f*h)) + (h*(d*i - f*g));
    printf("Determinant of matrix: %d", det);
}
