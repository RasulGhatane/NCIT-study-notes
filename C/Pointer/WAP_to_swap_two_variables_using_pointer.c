#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}