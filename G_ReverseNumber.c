#include <stdio.h>

int main(){

    int num;
    printf("Enter a Full Length Number: ");

    scanf("%d", &num);
    int rev = 0;

    for (;num != 0; num /= 10)
    {
        rev = rev * 10 + num % 10;
    }

    printf("Reversed Number: ");
    printf("%d\n", rev);
    
}