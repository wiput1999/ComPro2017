#include <stdio.h>
#include <math.h>

int isprime(int number);

int main(void) {

    int a, b, prime[101], temp = 0;

    scanf("%d %d", &a, &b);

    if (b > a) {
        for (int i = a + 1; i < b; i++) {
            if (isprime(i)) prime[temp++] = i;
        }
    }
    else {
        for (int i = b - 1; i > a; i--) {
            if (isprime(i)) prime[temp++] = i;
        }
    }

    if (!temp) {
        printf("Null");
    }
    else {
        for (int i = 0; i < temp; i++) printf("%d ", prime[i]);
    }

    return 0;
}

int isprime(int number) {

    if (number == 1) return 0;

    int limit = number > 10 ? sqrt(number) + 1 : number;

    for (int i = 2; i < (int) limit; i++) {
        if (number % i == 0) return 0;
    }

    return 1;
}
