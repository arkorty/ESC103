#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);

    b = a % 10;
    c = a / 10;

    printf("Last digit: %d\n\
New number: %d\n",
           b, c);
    return 0;
}
