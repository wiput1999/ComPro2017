#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;

    scanf("%d", &n);

    for (int i = -n; i <= n; i++) {
        for (int j = 0; j < abs(i); j++) printf(" ");
        for (int j = 0; j <= n - abs(i); j++) printf("%d", j % 10);
        for (int j = n - abs(i) - 1; j >= 0; j--) printf("%d", j % 10);
        printf("\n");
    }

    return 0;
}