/*
5	5	5	5	5	
4	4	4	4	
3	3	3	
2	2	
1
*/

#include <stdio.h>
int main() {
    int i, j;
    for(i=5;i>=1;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        printf("%d\t",i);
    }

    return 0;
