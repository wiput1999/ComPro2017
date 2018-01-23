#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (* (int *) a) - (* (int *) b);
}

int main(void) {
    int numbers[3], i;
    char seq[3];

    for (i = 0; i < 3; i++) {
        scanf("%d ", &numbers[i]);
    }

    for (i = 0; i < 3; i++) {
        scanf("%c", &seq[i]);
    }

    qsort(numbers, 3, sizeof(int), compare);

    for (i = 0; i < 3; i++) {
        switch (seq[i]) {
            case 'A':
                printf("%d ", numbers[0]);
                break;
            case 'B':
                printf("%d ", numbers[1]);
                break;
            case 'C':
                printf("%d ", numbers[2]);
                break;
        }
    }

    return 0;
}