#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, target, found = 0;
    int *arr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Number %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array\n", target);
    }

    free(arr);
    return 0;
}