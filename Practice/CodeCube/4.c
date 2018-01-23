#include <stdio.h>

int hcf(int number1, int number2) {
    if (number2 == 0) {
        return number1;
    }
    return hcf(number2, number1 % number2);
}

int main(void) {

    int n, walls[100000], input, idx = 0;
    long long sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input == 0) {
            continue;
        }
        walls[idx] = input;
        sum += input;
        idx++;
    }

    int gcd = walls[0];

    for (int i = 1; i < idx; i++) {
        gcd = hcf(walls[i], gcd);
    }

    long long result = sum / gcd;

    printf("%lld", result);

    return 0;
}