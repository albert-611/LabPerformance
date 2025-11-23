#include <stdio.h>

int main(){

    int a = 0, b = 1, num, next;

    printf("Enter Number of elements: ");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("%d ",a);
    }

    for (int i = 2; i <= num; i++)
    {
        next = a + b;
        printf("%d ", b);
        a = b;
        b = next;
    }
    
    return 0;
}