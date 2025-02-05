#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, j, temp;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    
    printf("Enter %d elements:\n", n);