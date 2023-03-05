#include <math.h>
#include <stdio.h>

int main() {
    printf("enter coefficients of ax^2 + bx + c = 0: ");
    double a, b, c, d, rP, iP;
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((d = b * b - 4 * a * c) < 0) {
        rP = -b / (2 * a);
        iP = sqrt(-d) / (2 * a);
        printf("roots are complex numbers:-\n\treal part: %.2lf imaginary part: %.2lf\n\treal part: %.2lf imaginary part: %.2lf\n", rP, iP, rP, iP);
    } else if (d == 0) {
        printf("roots are real and equal: %.2lf\n", -b / (2 * a));
    } else {
        printf("roots are real and distinct: %.2lf and %.2lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }

    return 0;
}
