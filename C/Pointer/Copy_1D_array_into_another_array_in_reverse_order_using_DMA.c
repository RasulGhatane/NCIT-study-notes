#include <stdio.h>
#include <stdlib.h>

void copyArrayInReverse(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[size - 1 - i];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *srcArray = (int *)malloc(size * sizeof(int));
    int *destArray = (int *)malloc(size * sizeof(int));

    if (srcArray == NULL || destArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &srcArray[i]);
    }

    copyArrayInReverse(srcArray, destArray, size);

    printf("The reversed array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destArray[i]);
    }
    printf("\n");

    free(srcArray);
    free(destArray);

    return 0;
}