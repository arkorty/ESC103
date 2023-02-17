#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    num *= 10;
    int bef = (int)num;
    float aft = (num * 10) - (int)(num * 10);
    printf("Number: %.2f\n", (bef + aft) / 10.0);
    return 0;
}
