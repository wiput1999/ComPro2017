#include <stdio.h>

int main(void) {

    int i, numbers[10], result[42], count = 0;

    for (i = 0; i < 42; i++) {
        result[i] = 0;
    }

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        numbers[i] = numbers[i] % 42;

        result[numbers[i]] = 1;
    }
    
    for (i = 0; i < 42; i++) {
        if (result[i]) count++;
    }

    printf("%d", count);

    return 0;
}