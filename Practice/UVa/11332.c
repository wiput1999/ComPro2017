#include <stdio.h>

int main(void) {

    int temp;
    long long number;

    while(1) {
        scanf("%lld", &number);

        if (number == 0) break;

        temp = 0;
        while(1) {
            while (number != 0) {
                temp += (number % 10);
                number /= 10;
            }
            if (temp / 10 == 0) break;
            number = temp;
            temp = 0;
        }
        printf("%d\n", temp);
    }

    return 0;
}