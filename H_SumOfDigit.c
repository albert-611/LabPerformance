#include <stdio.h>

int main(){

    int num, sum = 0;

    printf("Enter a Full Lenght Number: ");
    scanf("%d", &num);
    int ori = num;

    for ( ; num != 0; num /= 10)
    {
        sum += num % 10;
    }

    printf("The sum of %d is %d", ori,sum);
    
}