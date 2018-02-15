#include <stdio.h>
#include <math.h>

int main(void) {

    long double result, temp;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%Lf", &temp);

        result = powl(2, temp);

        printf("%.0Lf\n", result);

    }

    return 0;
}