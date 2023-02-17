#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int dig = (int)(num * 10) % 10;
    num = (dig < 5) ? num + dig / 10.0 : num;
    printf("Number: %.3f\n", num);
    return 0;
}
