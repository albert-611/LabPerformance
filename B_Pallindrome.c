#include<stdio.h>

int main(){

    int num;
    printf("Enter a Full Length Numebr: ");
    scanf("%d", &num);

    int original = num, rev = 0;

    for (;num != 0; num /= 10)
    {
        rev = rev * 10 + num % 10;
    }
    

    if (original == rev)
    {
        printf("Pallindrome\n");
    }

    else{
        printf("Not a Pallidrome\n");
    }

    return 0;
    
}