#include <stdio.h>

int fibo(int num) {
    if (num == 0 || num == 1) return 1;
    return fibo(num - 1) + fibo(num - 2);
}

int main(void) {

    int result, number;

    scanf("%d", &number);

    printf("method = %d", fibo(number));

    return 0;
}