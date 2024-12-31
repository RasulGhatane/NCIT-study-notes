//WAP to display n natural number in forward and reverse order
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Natural numbers in forward order:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\nNatural numbers in reverse order:\n");
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}