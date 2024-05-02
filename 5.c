#include <stdio.h>

int main() {
    int km, m, cm, mm;

    printf("Enter distance in kilometers: ");
    scanf("%d", &km);

    m = km * 1000;
    cm = km * 100000;
    mm = km * 1000000;

    printf("%d kilometers is equal to:\n", km);
    printf("%d meters\n", m);
    printf("%d centimeters\n", cm);
    printf("%d millimeters\n", mm);

    return 0;
}