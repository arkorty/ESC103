#include <math.h>
#include <stdio.h>

int main() {
    double num;
    printf("Number: ");
    scanf("%lf", &num);
    int k;
    printf("K: ");
    scanf("%d", &k);
    num *= pow(10, k);
    int bef = (int)num / 10;
    double res = ((double)bef + (num - (int)num)) / pow(10, k - 1);
    printf("Result: %lf\n", res);
    return 0;
}
