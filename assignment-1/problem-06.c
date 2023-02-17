#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    a = a / 10;
    a = a % 10;

    printf("Second last digit: %d\n", a);

    return 0;
}
