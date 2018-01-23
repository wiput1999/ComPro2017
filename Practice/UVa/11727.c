#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (* (int *)a) - (* (int *)b);
}

int main(void) {

    int i, n, salary[3];

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &salary[j]);
        }

        qsort(salary, 3, sizeof(int), compare);
        printf("Case %d: %d\n", i, salary[1]);
    }

    return 0;
}