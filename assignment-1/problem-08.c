#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    if (a % 10 < 5) {
        a = a + a % 10;
    }
    printf("%d\n", a);
    return 0;
}
