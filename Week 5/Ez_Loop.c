#include <stdio.h>

int main(void) {

    int n;

    scanf("%d", &n);

    if (n > 0) {
        for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    } else {
        for (int i = n; i <= 0; i++) {
            printf("%d ", i);
        }
    }

    return 0;

}