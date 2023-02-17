#include <math.h>
#include <stdio.h>

int main() {

    int cx, cy, r, x_intercept;
    scanf("%d %d %d %d", &cx, &cy, &r, &x_intercept);
    double delta_x = x_intercept - cx, delta_y = sqrt(pow(r, 2) - pow(delta_x, 2)), y1 = cy + delta_y,
           y2 = cy - delta_y;

    printf("(%d, %.0lf) (%d, %.0lf)\n", x_intercept, y1, x_intercept, y2);
}
