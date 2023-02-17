#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    int b = (a % 10) + ((a / 10) % 10);
    printf("%d\n", b);
    return 0;
}
