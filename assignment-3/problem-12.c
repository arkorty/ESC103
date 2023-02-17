#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int e = abs(a - d);

    double f = sqrt(pow(c, 2) - pow(e, 2));

    printf("%.1lf\n", 2 * f);

    return 0;
}
