#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char text[10000];
    int upper = 0, lower = 0;

    scanf("%s", text);

    int size = strlen(text);

    for (int i = 0; i < size; i++) {
        if (isupper((int) text[i])) {
            upper++;
        }

        if (islower((int) text[i])) {
            lower++;
        }
    }

    if (upper == 0 && lower > 0) {
        printf("All Small Letter");
    } else if (upper > 0 && lower == 0) {
        printf("All Capital Letter");
    } else {
        printf("Mix");
    }

    return 0;
}