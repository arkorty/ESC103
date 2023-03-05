#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = acos((pow(a, 2) - pow(b, 2) - pow(c, 2)) / (2 * b * c));
    printf("%.1lf\n", d / acos(-1) * 180);

    return 0;
}
