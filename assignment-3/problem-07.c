#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, d, e;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    double dist = (a * c + b * d + e) / sqrt(c * c + d * d);
    printf("Distance: %.1lf\n", dist);

    return 0;
}
