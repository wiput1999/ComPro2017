#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int number);
int compare(const void *a, const void *b);

int main(void) {

    int number, temp = 0, prime[1000];

    while (1) {
        scanf("%d", &number);
        
        if (!number) break;

        if (isprime(number)) prime[temp++] = number;

    }

    qsort(prime, temp, sizeof(int), compare);

    for (int i = 0; i < temp; i++) printf("%d\n", prime[i]);

    return 0;
}

int isprime(int number) {

    if (number == 1) return 0;

    int limit = number > 10 ? sqrt(number) : number;

    for (int i = 2; i < (int) limit; i++) {
        if (number % i == 0) return 0;
    }

    return 1;
}

int compare(const void *a, const void *b) {
    return *(const int *) a - *(const int *) b;
}

