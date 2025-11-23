#include <stdio.h>

int main(){

    int num, sumOdd = 0, SumEven = 0;

    printf("Enter a Full Lenght Number: ");
    scanf("%d", &num);

    for ( ; num != 0; num /= 10)
    {
        int val = num % 10;

        if (val %2 == 0)
        {
            SumEven += val;
        }

        else{

            sumOdd += val;
        }
        
    }

    printf("Summation of Even Numbers are : %d\n", SumEven);
    printf("Summation of Odd Numbers are : %d\n", sumOdd);

    
    return 0;
}