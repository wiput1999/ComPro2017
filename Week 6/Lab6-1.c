#include <stdio.h>

int main(void) {

    int array_m[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int array_n[] = {1, 3, 9, 7, 11, 15, 19};
    int number;

    input:
    scanf("%d", &number);

    if (number < 1 || number > 20) goto input;
    for (int i = 0; i < 8; i++) {
        if (number == array_m[i]) {
            printf("%d is in M at index [%d]", number, i);
            return 0;
        }
    }

    for (int i = 0; i < 7; i++) {
        if (number == array_n[i]) {
            printf("%d is in N at index [%d]", number, i);
            return 0;
        }
    }

    printf("%d is not in neither M nor N", number);
    return 0;
}