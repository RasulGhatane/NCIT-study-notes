#include <stdio.h>

int sumOfArray(int *arr, int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumOfArray(arr, size);
    printf("Sum of array: %d\n", result);
    return 0;
}