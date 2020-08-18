#include<stdio.h>

int main() {
   int i, j, mat1[10][10], mat2[10][10], mat3[10][10];
   int row1, col1, row2, col2;

   printf("Enter the number of Rows and Columns of first Matrix : ");
   scanf("%d %d", &row1, &col1);

   printf("\nEnter the number of Rows and Columns of second Matrix : ");
   scanf("%d %d", &row2, &col2);

   if (row1 != row2 || col1 != col2) {
      printf("\nOrder of two matrices is not same\n");
      return 0;
   }

   printf("\nEnter the Element of First Matrix\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         scanf("%d", &mat1[i][j]);
      }
   }

   printf("Enter the Element of Second Matrix\n");
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
         scanf("%d", &mat2[i][j]);
      }

   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         mat3[i][j] = mat1[i][j] + mat2[i][j];
      }

   printf("\nThe Addition of two Matrices is : \n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("%d ", mat3[i][j]);
      }
      printf("\n");
   }

   return 0;
}
