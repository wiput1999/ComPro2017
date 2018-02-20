#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * n) - 1; j++) {
            if (i == j || j == (n - 1) || j == (2 * n) - i - 2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}