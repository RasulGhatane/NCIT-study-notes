#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    int *p;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    p = arr;
    for(i = 0; i < n; i++, p++)
        sum += *p;
    
    printf("Sum = %d\n", sum);
    return 0;
}