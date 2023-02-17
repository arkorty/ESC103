#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    printf("Enter another number: ");
    int b;
    scanf("%d", &b);

    a = ((a / 10) * 10 + b % 10) * ((b / 10) * 10 + a % 10);

    printf("%d\n", a);
}
