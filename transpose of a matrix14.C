#include <stdio.h>


 
int main()

{
    int a[10][10], transpose[10][10], rows, coln;
      printf("Enter rows and columns: ");
      scanf("%d %d", &rows, &coln);

      printf("Enter matrix elements:\n");
      for (int i = 0; i < rows; i++)
      
      for (int j = 0; j < coln; j++)
      {

        scanf("%d", &a[i][j]);
      }


      printf("Entered matrix:\n");
      for (int i = 0; i < rows; ++i)
      for (int j = 0; j < coln; ++j)
      {
        printf("%d\t", a[i][j]);
        if (j == coln - 1)
        printf("\n");
      }

      for (int i = 0; i < rows; ++i)
      for (int j = 0; j < coln; ++j)
      {
        transpose[j][i] = a[i][j];
      }

      printf("Transpose of the matrix:\n");
      for (int i = 0; i < coln; i++)
      for (int j = 0; j < rows; j++)
      {
        printf("%d  ", transpose[i][j]);
        if (j == rows - 1)
        printf("\n");
      }
          return 0;
      }
