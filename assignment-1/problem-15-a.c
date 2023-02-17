#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    a = a - (a / 10) * 10;
    printf("%d\n", a);
    return 0;
}
