#include <stdio.h>

int main() {
   int mat[10][10], temp, n, i, j;

   printf("Enter the size of matrix: ");
   scanf("%d", &n);

   // Input matrix elements
   printf("Enter the matrix elements:\n");
   for (i = 0; i<n; i++) {
      for (j = 0; j < n; j++)
      {
            printf("Matrix[%d][%d] = ",i,j);
            scanf("%d", &mat[i][j]);
      }
   }
    printf("Matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

   // Interchange diagonal elements
   for (i = 0; i < n; i++) {
      temp = mat[i][i];
      mat[i][i] = mat[i][n-i-1];
      mat[i][n-i-1] = temp;
   }

   // Print the modified matrix
   printf("Modified matrix:\n");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         printf("%d\t", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}
