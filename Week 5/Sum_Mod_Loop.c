#include <stdio.h>

int main(void) {

    int number, last, sum = 1, cond = 1;

    while (1) {
        scanf("%d", &number);

        if (number == 0) break;

        if (cond == 1) {
            last = number;
            cond = 0;
            continue;
        }

        sum += (last % number);

        last = number;
    }

    printf("%d", sum);

    return 0;
}