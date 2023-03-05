#include <math.h>
#include <stdio.h>

int main() {
    double hypo, oppo, adja;
    scanf("%lf %lf %lf", &hypo, &oppo, &adja);
    double some = (hypo + oppo + adja) / 2;
    double area = sqrt(some * (some - hypo) * (some - oppo) * (some - adja));
    printf("Area: %.2lf\n", area);

    return 0;
}
