#include <stdio.h>

void main() {
    int a[5][5], b[5][5], c[5][5];
    int i, j, k;
    int m, n, p, q;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible. Columns of A must match rows of B.\n");
        return;
    }

    printf("Enter matrix A row-wise:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }     

    printf("Enter matrix B row-wise:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]); 
        }
    }

    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    printf("Product of Matrix A and B :\n");
    for (i = 0; i < m; i++) { 
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
}
