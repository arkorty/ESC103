#include <math.h>
#include <stdio.h>

int main() {
    printf("enter coefficients of ax + bx + c = 0: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b == 0.0) {
        printf("the line is not vertical\n");
    }

    printf("slope of the line is %.2lf\n", -a / b);

    return 0;
}
