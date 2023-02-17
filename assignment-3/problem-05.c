#include <math.h>
#include <stdio.h>

int main() {
    double a_x, a_y, b_x, b_y, c_x, c_y;
    scanf("%lf %lf %lf %lf %lf %lf", &a_x, &a_y, &b_x, &b_y, &c_x, &c_y);

    double dist_a = sqrt(pow(b_y - a_y, 2) + pow(b_x - a_x, 2));
    double dist_b = sqrt(pow(c_y - b_y, 2) + pow(c_x - b_x, 2));
    double dist_c = sqrt(pow(a_y - c_y, 2) + pow(a_x - c_x, 2));

    double some = (dist_a + dist_b + dist_c) / 2;
    double area = sqrt(some * (some - dist_a) * (some - dist_b) * (some - dist_c));

    printf("Area: %.2lf\n", area);

    return 0;
}
