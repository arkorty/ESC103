#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int dig = ((int)(num * 10)) % 10;
    printf("Digit: %d\n", dig);
    return 0;
}
