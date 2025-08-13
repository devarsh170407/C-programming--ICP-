#include <stdio.h>

void main() {
    int i = 0, j = 0, count = 0, result = 0;
    int n, m, k;
    int arr1[n];
    int arr2[m];

    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements of the first array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);
   
    printf("Enter %d elements of the second array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);


    for (count = 0; count < k; count++) {
        if (i < n && (j >= m || arr1[i] <= arr2[j])) {
            result = arr1[i++];
        } else {
            result = arr2[j++];
        }
    }

    printf("The %d-th element of the final sorted array is: %d\n", k, result);
}
