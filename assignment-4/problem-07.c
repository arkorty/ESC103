#include <math.h>
#include <stdio.h>

int main() {
    printf("enter five numbers: ");
    int a, b, c, d, x;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);

    if (x == a) {
        printf("x is equal to a\n");
    } else if (x == b) {
        printf("x is equal to b\n");
    } else if (x == c) {
        printf("x is equal to c\n");
    } else if (x == d) {
        printf("x is equal to d\n");
    }

    return 0;
}
