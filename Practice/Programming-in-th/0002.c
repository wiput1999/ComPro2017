#include <stdio.h>

int main(void) {
    int n, max = -2000000001, min = 2000000001, input;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);

        if (input > max) max = input;
        if (input < min) min = input;
    }

    printf("%d\n%d", min, max);

}