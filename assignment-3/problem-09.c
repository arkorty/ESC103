#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double d = (double)a / -2, e = (double)b / -2, f = sqrt(pow(d, 2) + pow(e, 2) - c);

    printf("(%.2lf, %.2lf), %.2lf\n", d, e, f);

    return 0;
}
