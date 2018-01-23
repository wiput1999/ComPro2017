#include <stdio.h>

int find_gcd(int number1, int number2) {
    if (number2 == 0) {
        return number1;
    }
    return find_gcd(number2, number1 % number2);
}

long long find_lcm(long long number1, long long number2) {
    long long result = (number1 * number2) / find_gcd(number1, number2);

    return result;
}

int main(void) {

    int n, bus[100000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &bus[i]);
    }

    long long lcm = 1;

    for (int i = 0; i < n; i++) {
        lcm = find_lcm(bus[i], lcm);
    }

    printf("%lld", lcm);

    return 0;
}