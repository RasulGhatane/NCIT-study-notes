//WAP to find HCF and LCM of a given number
#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, i;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}