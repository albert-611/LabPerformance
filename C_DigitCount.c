#include<stdio.h>

int main(){

    int num;
    int count = 0;
    printf("Enter a Full Length Numebr: ");
    scanf("%d", &num);

    int ori = num;

    for (;num != 0; num /= 10)
    {
        count++;
    }
    

   printf("\nThe number %d have %d digits\n", ori,count);
    
}