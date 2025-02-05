#include <stdio.h>

int main() {
    int a, b;
    int *p, *q;

    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    if (*p > *q) {
        printf("%d\n", *p);
    } else {
        printf("%d\n", *q);
    }

    return 0;
}
