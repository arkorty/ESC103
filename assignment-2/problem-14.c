#include <stdio.h>

int main() {
    double num;
    printf("Number: ");
    scanf("%lf", &num);
    int k;
    printf("K: ");
    scanf("%d", &k);
    int inm = (int)num, sum = 0;
    while (k-- != 0) {
        sum += inm % 10;
        inm /= 10;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
