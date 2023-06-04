#include<stdio.h>
#include<math.h>
float factorial(int n) 
{
    if (n == 0)
        return 1.0;
    else
        return n * factorial(n - 1);
}
float seriesSum(float x, int n) 
{
    if (n == 0)
        return 1.0;
    else
        return (pow(x, ((2 * n))) / factorial((2 * n))) + seriesSum(x, n - 1);
}
int main()
{
    float x;
    int n;
    
    printf("x: ");
    scanf("%f", &x);
    
    printf("n: ");
    scanf("%d", &n);
    
    double sum = seriesSum(x, n);
    
    printf("Sum = %.6f\n", sum);
    
    return 0;
}
