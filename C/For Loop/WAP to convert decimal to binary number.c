//WAP to convert decimal to binary number
#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    
    for (i = 0; n > 0; i++) {
        binaryNum[i] = n % 2;
        n = n / 2;
    }
    
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}