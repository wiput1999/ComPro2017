#include <stdio.h>

#define swap(a, b) {\
    a = a - b;\
    b = a + b;\
    a = b - a;\
}

int main(void) {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    printf("%.2lf", b);

    return 0;
}