#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *) b);
}

int main(void) {

    int cases, number, stores[20];

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        scanf("%d", &number);
        for (int j = 0; j < number; j++) {
            scanf("%d", &stores[j]);
        }

        qsort(stores, number, sizeof(int), compare);
        printf("%d\n", 2 * (stores[number - 1] - stores[0]));
    }

    return 0;
}