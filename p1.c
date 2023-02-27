// C program to print Perfect numbers from start to end
#include <stdio.h>

int main() {
   int start, end, i, j, sum;

   printf("Enter range: ");
   scanf("%d %d", &start, &end);

   for (j = start; j <= end; j++) {
      sum = 0;

      for (i = 1; i < j; i++) {
         if (j % i == 0) {
            sum += i;
         }
      }

      if (sum == j) {
         printf("%d ", j);
      }
   }

   return 0;
}
