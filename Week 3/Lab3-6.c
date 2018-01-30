#include <stdio.h>

int main(void) {

    double side_a, side_b;

    scanf("%lf", &side_a);
    scanf("%lf", &side_b);

    printf("Perimeter of rectangle = %.4lf units", side_a * 2 + side_b *2);

    return 0;
}