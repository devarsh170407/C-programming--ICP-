#include <stdio.h>
void main() 
{
    int a[5][5], b[5][5], c[5][5];
    int i, j;
    int m, n, p, q;

    printf("Enter the number of rows and columns for matrix A= ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns for matrix B= ");
    scanf("%d%d", &p, &q);

    if (m != p || n != q) {
        printf("Size does not match. Addition is not possible.\n");
    }
    return ;
    printf("Enter matrix A row-wise=\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B row-wise=\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix A=\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B=\n");
    for (i = 0; i < p; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrix A and B=\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
}
