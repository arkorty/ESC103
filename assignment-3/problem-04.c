#include <math.h>
#include <stdio.h>

int main() {
    double a_x, a_y, b_x, b_y;
    scanf("%lf %lf %lf %lf", &a_x, &a_y, &b_x, &b_y);
    double dist = sqrt(pow(b_y - a_y, 2) + pow(b_x - a_x, 2));
    printf("Distance: %.2lf\n", dist);

    return 0;
}
