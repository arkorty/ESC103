#include <stdio.h>

int main() {
    printf("enter two numbers: ");
    double a, b, m;
    scanf("%lf %lf", &a, &b);

    if (a > b) {
        m = a;
    } else {
        m = b;
    }

    printf("%lf is the bigger number\n", m);

    return 0;
}
