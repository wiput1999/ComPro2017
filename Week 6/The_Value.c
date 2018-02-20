#include <stdio.h>

int main(void) {

    int n, number[1000], duplicate[1000], dup = 0, temp = 0, sep[1000], temp2 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    for(int i = 0; i < n; i++) {
        dup = 0;
        for(int j = 0; j < n; j++) {
            if (i == j) continue;

            if (number[i] == number[j]) {
                dup = 1;
            }
        }

        if (dup) {
            for(int j = 0; j < temp; j++) {
                if (number[i] == duplicate[j]) dup = 0;
            }

            if (dup) duplicate[temp++] = number[i];

        }
    }

    for (int i = 0; i < n; i++) {
        dup = 0;
        for (int j = 0; j < temp2; j++) {
            if (number[i] == sep[j]) dup = 1;
        }
        if (!dup) {
            sep[temp2++] = number[i];
        }
    }

    for(int i = 0; i < temp2; i++) printf("%d ", sep[i]);
    printf("\n");
    if (!temp) {
        printf("Not found duplicate.");
        return 0;
    }
    for(int i = 0; i < temp; i++) printf("%d ", duplicate[i]);

    return 0;
}