//Given 3 numbers, write a C program that prints the numbers from smallest to largest
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter A, B, C : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c){
        if(b>=c) {
            printf("%d<%d<%d",c,b,a);
        }
        else {
            printf("%d<%d<%d",b,c,a);
        }
    }
    else if(b>=a&&b>=c){
        if(a>c) {
            printf("%d<%d<%d",c,a,b);
            }
        else {
            printf("%d<%d<%d",a,c,b);
        }
    }
    else if(c>=a&&c>=b) {
        if(a>=b) {
            printf("%d<%d<%d",b,a,c);
        }
        else {
            printf("%d<%d<%d",a,b,c);
        }
    }
}
