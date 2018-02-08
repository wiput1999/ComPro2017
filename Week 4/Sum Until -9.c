#include <stdio.h>

int main(void) {

    long long int sum = 0, num;

    while (1) {
        scanf("%lld", &num);

        if (num == -9) break;
        sum += num;
    }

    printf("%lld", sum);

    return 0;

}