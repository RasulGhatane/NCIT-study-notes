/*
A	
B	B	
C	C	C	
D	D	D	D	
E	E	E	E	E
*/

#include <stdio.h>

int main() {
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
