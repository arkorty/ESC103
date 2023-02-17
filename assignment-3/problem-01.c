#include <math.h>
#include <stdio.h>

int main() {
    double ang_deg;
    printf("Enter an angle in radians: ");
    scanf("%lf", &ang_deg);
    printf("%.3lf\n", cos(ang_deg));

    return 0;
}
