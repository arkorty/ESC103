#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    a = ((a / 1000) * 1000) + ((a % 10) * 100) + (((a / 10) % 10) * 10) + ((a / 100) % 10);
    printf("%d\n", a);
}
