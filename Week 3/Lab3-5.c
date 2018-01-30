#include <stdio.h>

int main(void) {

    double number_a, number_b;

    scanf("%lf,%lf", &number_a, &number_b);

    printf("The sum of the given numbers : %lf\n", number_a + number_b);
    printf("The difference of the given numbers : %lf\n", number_a - number_b);
    printf("The product of the given numbers : %lf\n", number_a * number_b);
    printf("The quotient of the given numbers : %lf", number_a / number_b);

    return 0;
}