#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(a, b);
}

int main(void) {

    char input[31], str[1001][31];
    int temp = 0, n, valid;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        valid = 1;

        scanf("%s", input);

        for(int j = 0; j < temp; j++) {
            if (!strcmp(input, str[j])) {
                valid = 0;
            }
        }

        if (valid) strcpy(str[temp++], input);
    }

    qsort(str, temp, sizeof(str[0]), compare);

    for (int i = 0; i < temp; i++) printf("%s\n", str[i]);

    return 0;
}