#include <stdio.h>

int main(){

    int n, i, j;
    printf("Enter n number: ");
    scanf("%d", &n);

    printf("\nPrime number from 1 to %d: ", n);

    int prime;
    for (i = 2; i <= n; i++)
    {

        prime = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
            }
            
        }

        if (prime)
    {
        printf("%d ", i);
    }
        
    }
    
}