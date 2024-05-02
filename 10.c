#include <stdio.h>

int main() {
    int roll, sub1, sub2, sub3, total;
    float avg;
    char grade;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    avg = (float)total / 3;

    if (total >= 200 && avg >= 60)
        grade = 'A';
    else if (total >= 150 && avg >= 50)
        grade = 'B';
    else if (total >= 100 && avg >= 40)
        grade = 'C';
    else
        grade = 'F';

    printf("\nRoll number: %d", roll);
    printf("\nMarks in three subjects: %d %d %d", sub1, sub2, sub3);
    printf("\nTotal marks: %d", total);
    printf("\nAverage marks: %.2f", avg);
    printf("\nGrade: %c", grade);

    switch (grade) {
        case 'A':
            printf("\nExcellent!");
            break;
        case 'B':
            printf("\nGood job!");
            break;
        case 'C':
            printf("\nYou can do better!");
            break;
        case 'F':
            printf("\nBetter luck next time!");
            break;
        default:
            printf("\nInvalid grade!");
            break;
    }

    return 0;
}