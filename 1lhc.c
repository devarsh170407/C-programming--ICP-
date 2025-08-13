#include <stdio.h>

void main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7; 
    int d = 2;  
    int temp[d];

    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];}

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];}

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i]; }

    printf("rotating left by %d steps:\n",d);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
}