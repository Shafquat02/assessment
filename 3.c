#include <stdio.h>

int main(){
int a, b, max; 

    printf("Enter two value :-");

    scanf("%d%d", &a,&b);

    if(a<b)

    max = a;
    else
        max = b;

    printf("%d is maximum.\n", max);

    return 0;
}