#include <stdio.h>
void main()
 {
    int a[5][5], i, j, n;

    printf("Enter the value of rows and columns for the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix A row-wise:\n");
    for (i = 0; i < n; i++)
     {
        for (j = 0; j < n; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your matrix is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

   printf("Transpose of the matrix is:\n");
    for (j = 0; j < n; j++) 
    {
        for (i = 0; i < n; i++)
         {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
