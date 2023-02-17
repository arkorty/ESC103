#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    a = a / 10;
    printf("New number: %d\n", a);
    return 0;
}
