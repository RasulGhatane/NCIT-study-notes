//WAP to check whether a given number is strong or not.
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact; 
}

int main() {
    int num, sum = 0, temp, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }
    
    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    
    return 0;
}