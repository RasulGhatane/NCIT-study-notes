#include <stdio.h>
#include <stdlib.h>

void readMatrix(int *matrix, int m, int n) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (matrix + i * n + j));
        }
    }
}

void displayMatrix(int *matrix, int m, int n) {
    printf("The matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(matrix + i * n + j));
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int *matrix = (int *)malloc(m * n * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    readMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);

    free(matrix);
    return 0;
}