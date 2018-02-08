#include <stdio.h>

int main(void) {

    int n;
    double max, min, number, average;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &number);
        if (i == 0) {
            max = number;
            min = number;
        }

        if (number > max) max = number;
        if (number < min) min = number;
        
        average += number;
    }

    average /= n;

    printf("%d Values\n", n);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n", max);
    printf("Avg: %.2lf", average);

    return 0;

}