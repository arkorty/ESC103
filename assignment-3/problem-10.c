#include <assert.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
} point;

point finter(float m1, float b1, float m2, float b2) {
    assert((m1 - m2) != 0); // avoid divide by zero
    point p;
    p.x = (b2 - b1) / (m1 - m2);
    p.y = p.x * m1 + b1;
    return p;
}

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    point p = finter((double)-a / b, (double)-c / b, (double)-d / e, (double)-f / e);

    printf("(%.1lf, %.1lf)\n", p.x, p.y);

    return 0;
}
