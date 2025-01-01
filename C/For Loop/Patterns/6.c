/*
A	
B	C	
D	E	F	
G	H	I	J	
K	L	M	N	O
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
            ch++;
        }
        printf("\n");
    }
    return 0;
}