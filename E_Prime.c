#include <stdio.h>

int main(){

    int num, prime = 1;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        
    }

    printf("\n");

    if (prime)
    {
        printf("%d is a Prime Number\n", num);
    }
    else{
        printf("%d is not a Prime Number\n", num);
    }
    
    
}