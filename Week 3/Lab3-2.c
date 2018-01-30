#include <stdio.h>

int main(void) {

    double number, sum = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%lf", &number);
        sum += number;
    }

    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf\n", sum / 4);


    return 0;
}