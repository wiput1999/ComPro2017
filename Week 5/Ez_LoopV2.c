#include <stdio.h>

int main(void) {

    int n;

    begin:
    scanf("%d", &n);

    if (n % 2 == 1 || n < 2) {
        printf("error\n");
        goto begin;
    }

    for(int i = 1; i <= n / 2; i++) printf("%d", i);
    for(int i = n / 2; i >= 1; i--) printf("%d", i);

    return 0;
}