#include<stdio.h>
#include <math.h>
int main(){

    int num,count = 0, original, remainder;
    float result = 0.0;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    original = num;//Assigning num to Origin

    for (; original != 0; original /= 10)
    {
        count++;
    }

    //now origin is 0 so again we need to assign num to origin
    original = num; 

    for (;original != 0; original /= 10)
    {
        remainder = original % 10;
        result += pow(remainder, count);
    }

    if ((int)result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    
    else{
        printf("%d is not an Armstrong number.\n", num);
    }
    
    
}