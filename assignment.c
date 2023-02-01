//Determine how much money will accumulate in a bank account after n years

#include<stdio.h>
#include<math.h>
int main()
{
    float F,P,n,i,r;
    printf("Enter amount: ");
    scanf("%f",&P);
    printf("Enter interest rate : ");
    scanf("%f",&r);
    printf("Enter number of years: ");
    scanf("%f",&n);
    i=r/100.00;
    F=P*(pow(1+i,n));
    printf("Final amount : %.2f ",F);
    return 0;
}
