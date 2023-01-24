#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter physics: ");
    scanf("%d",&marks[0]);
    printf("Enter Chemistry: ");
    scanf("%d",&marks[1]);
    printf("Enter Math: ");
    scanf("%d",&marks[2]);

    printf("Phy = %d, Chem = %d, Math = %d",marks[0],marks[1],marks[2]);
    return 0;

}
