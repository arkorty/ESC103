#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int inm = (int)(num * 10);
    inm = ((inm / 100) * 100) + ((inm % 10) * 10) + ((inm / 10) % 10);
    num = (inm + (num * 10) - (int)(num * 10)) / 10.0;
    printf("Number: %.3f\n", num);
    return 0;
}
