//WAP to print all armstrong numbers from 100 to 500
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Armstrong numbers between 100 and 500 are: \n");
    for (num = 100; num <= 500; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}