#include <stdio.h>

int main(void) {

    double price, diameter, height, pi = 3.14159265359, volume;

    scanf("%lf", &price);
    scanf("%lf", &diameter);
    scanf("%lf", &height);

    volume = pi * (diameter / 2) * (diameter / 2) * height;

    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price / volume);

    return 0;
}