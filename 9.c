#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter choice: 1.Add 2.Sub 3.Multiply 4.Div\n");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Result: %d\n", num1 + num2);
    else if (choice == 2)
        printf("Result: %d\n", num1 - num2);
    else if (choice == 3)
        printf("Result: %d\n", num1 * num2);
    else if (choice == 4) {
        if (num2 != 0)
            printf("Result: %.2f\n", (float)num1 / num2);
        else
            printf("Error!..... Division by zero not possible.\n");
    }
    return 0;
}