#include <stdio.h>

int main() {
    float num;
    printf("Number: ");
    scanf("%f", &num);
    int dig = (int)(num * 100) % 10;
    printf("Number: %d\n", dig);
    return 0;
}
