#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    num = (int)num * 10 + 1 + (num - (int)num);
    printf("Number: %.3f\n", num);
    return 0;
}
