#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    int b = a / 10;
    int c = a / 100;
    a = ((a / 1000) * 1000) + (a - (a / 10) * 10) * 100 + (b - (b / 10) * 10) * 10 + (c - (c / 10) * 10);
    printf("%d\n", a);
    return 0;
}
