#include <stdio.h>

int main(){

    int n;
    printf("Enter Your choice(1-4): ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("You Selected: General Knowledge quiz\n");
        printf("Question: What is the Work of Scanf?\n");
        break;

    case 2:
        printf("You Selected: Science quiz\n");
        printf("Question: What is the Chemical symbol of water?\n");
        break;

    case 3:
        printf("You Selected: History quiz\n");
        printf("Question: When did Bangladesh Achieved Victory Day\n");
        break;

    case 4:
        printf("You Selected: Sports\n");
        printf("Question: When did Argentina Won third WorldCup?\n");
        break;
    
    default:
        break;
    }

    return 0;
}