#include <stdio.h>

int main(){

    int n;
    printf("Enter number of Elements: ");
    scanf("%d", &n);

    printf("\n");
    printf("Enter Elements: \n");
    
    int num;

    int odd =0, even = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if (num %2 == 0)
        {
            printf("%d is an Even number\n", num);
        }

        else{

            printf("%d is an Odd number\n", num);
        }
        
    }

    return 0;
    
}