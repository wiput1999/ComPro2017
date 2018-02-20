#include <stdio.h>

int main(void) {

    int n, m, k, result = 0;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    result += (n / 5) * 375;
    result += (n % 5) * 80;

    result += (m / 5) * 390;
    result += (m % 5) * 90;

    printf("%.2f", (float) result);

    return 0;
}