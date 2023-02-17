#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    c = a / b;
    d = a % b;

    printf("Quotient: %d\n\
Remainder: %d\n",
           c, d);

    return 0;
}
