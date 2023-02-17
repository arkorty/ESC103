#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    float nnum = (int)(num / 10) + (num - (int)num);
    printf("Number: %.3f\n", nnum);
    return 0;
}
