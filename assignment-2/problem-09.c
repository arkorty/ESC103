#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int inm = (int)num;
    inm = ((inm / 100) * 100) + ((inm % 10) * 10) + ((inm / 10) % 10);
    num = inm + (num - (int)num);
    printf("Number: %.3f\n", num);
    return 0;
}
