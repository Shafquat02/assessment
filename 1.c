#include <stdio.h>

int main() {

    double num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if (num <= 0) {
        if (num == 0)
            printf("You entered 0");
        else
            printf("This is a negative no.");
    } 
    else
        printf("this is a positive no.");

    return 0;
}

