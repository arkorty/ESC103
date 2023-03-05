#include <math.h>
#include <stdio.h>

int main() {
    double val;
    printf("Enter a number: ");
    scanf("%lf", &val);
    printf("%.3lf\n", acos(val) / acos(-1.0) * 180);

    return 0;
}
