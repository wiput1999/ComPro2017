#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {

    long long div3 = 0, count = 1, res11 = 0, converted, remember[5];
    char number[1000002];

    scanf("%s", number);

    int len = strlen(number);

    if (len % 2 == 0) {
        for (int i = len - 1; i >= 1; i -= 2) {
            res11 += (int) (number[i] - '0') % 11 + (int) (number[i - 1] - '0') * 10 % 11;
            div3 += (int) (number[i] - '0') + (int) (number[i - 1] - '0');
        }
    }
    else {
        for (int i = len - 1; i > 0; i -= 2) {
            res11 += (int) (number[i] - '0') % 11 + (int) (number[i - 1] - '0') * 10 % 11;            
            div3 += (int) (number[i] - '0') + (int) (number[i - 1] - '0');
        }
            res11 += (int) (number[0] - '0') % 11;
            div3 += (int) (number[0] - '0');
    }

    result:
    printf("%llu %llu", div3 % 3, res11 % 11);

    return 0;
}