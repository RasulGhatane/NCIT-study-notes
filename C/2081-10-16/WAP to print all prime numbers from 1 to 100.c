//WAP to print all prime numbers from 1 to 100
#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume the number is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}