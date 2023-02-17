#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    a = ((a / 100) * 100) + ((a % 10) * 10) + ((a / 10) % 10);
    printf("%d\n", a);
    return 0;
}
