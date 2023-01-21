#include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        int num,n,r,temp,sum=0;
        printf("Enter number : ");
        scanf("%d", &num);

        temp = num;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum *10 + r;
            temp = temp / 10;
        }
        if(sum == num )
        {
            printf("Palindrome number\n");
        }
        else
        {
            printf("Not Palindrome number\n");
        }
    }
}
