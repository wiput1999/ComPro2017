#include <stdio.h>
#include <stdlib.h>

double * getValue(int n);
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main(void) {

    double *numbers;
    int n;

    scanf("%d", &n);

    numbers = getValue(n);

    printf("%d Values\n", n);
    printf("Min: %.3lf\n", findMin(numbers, n));
    printf("Max: %.3lf\n", findMax(numbers, n));
    printf("Avg: %.3lf", findAvg(numbers, n));

    return 0;
}

double * getValue(int n) {
    double *numbers = (double *) malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    return numbers;
}

double findMin(double array[], int size) {
    double min = array[0];

    for (int i = 0; i < size; i++) min = array[i] < min ? array[i] : min;

    return min;
}

double findMax(double array[], int size) {
    double max = array[0];

    for (int i = 0; i < size; i++) max = array[i] > max ? array[i] : max;

    return max;
}

double findAvg(double array[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) sum += array[i];

    return sum / size;
}
