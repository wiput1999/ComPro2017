#include <stdio.h>
#include <math.h>

int main(void) {

    double side_a, side_b;

    scanf("%lf", &side_a);
    scanf("%lf", &side_b);

    printf("%.2f", sqrt(pow(side_a, 2) + pow(side_b, 2)));

    return 0;
}
