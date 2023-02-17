#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int bef = (int)num;
    float aft = (num * 10) - (int)(num * 10);
    printf("Number: %.2f\n", aft + bef);
    return 0;
}
