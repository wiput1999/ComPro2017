#include <stdio.h>

long long fac(int number) {
    long long result = 1;

    for (int i = 1; i <= number; i++) result *= i;

    return result;
}

long long multiply(int num1, int num2) {
    long long result = 1;

    for (int i = num1 + 1; i <= num2; i++) result *= i;

    return result;
}

int main(void) {

    int people;
    long long result;

    scanf("%d", &people);

    if (people % 2 == 1) people += 1;

    result = multiply(people / 2, people) / fac(people / 2);

    printf("%lld", result);

    return 0;
}