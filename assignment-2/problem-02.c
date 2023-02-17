#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    num = (int)num + 0.1 + ((num - (int)num) / 10);
    printf("Number: %f\n", num);
    return 0;
}
