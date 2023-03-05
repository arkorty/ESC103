#include <stdio.h>

int main() {
    double a, b, c;
    printf("enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a * a == b * b + c * c) {
        printf("angle A is 90 degrees\n");
    } else {
        printf("angle A is not 90 degrees\n");
    }

    return 0;
}
