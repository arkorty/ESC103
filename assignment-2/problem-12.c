#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int sum = (int)(num * 10) % 10 + (int)(num * 100) % 10;
    printf("Sum: %d\n", sum);
    return 0;
}
