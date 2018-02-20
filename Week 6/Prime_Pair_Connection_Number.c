#include <stdio.h>
#include <math.h>

int digit(int number);

int main(void) {

    int p, q;

    scanf("%d %d", &p, &q);

    for(int i = 0; i <= 10000; i += q) {
        if (i % (int) pow(10, digit(p)) == p) {
            printf("%d", i);
            return 0;
        }
    }

    printf("Too Large!!!");

    return 0;
}

int digit(int number) {

    int count = 0;

    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}