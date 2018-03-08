#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibo(int num) {
    if (num == 0 || num == 1) return 1;
    return fibo(num - 1) + fibo(num - 2);
}

int main(void)
{
    int n;

    char a[2], b[2];

    scanf("%s %s %d", a, b, &n);

    int fi = fibo(n);

    char result[n][fi];

    strcpy(result[0], a);
    strcpy(result[1], b);

    for (int i = 2; i < n; i++) {
        char *temp = malloc(strlen(result[i - 1]) + strlen(result[i - 2]) + 1);

        temp = strcat(result[i - 2], result[i - 1]);

        strcpy(result[i], temp);
    }

    printf("%s", result[n - 1]);

    return 0;
}