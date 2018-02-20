#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void) {
    
    char number[6];
    int length;

    scanf("%s", number);

    length = strlen(number);

    qsort(number, length, sizeof(char), compare);

    printf("%s", number);

    return 0;
}

int compare(const void *a, const void *b) {
    return *(const char *) a > *(const char *) b;
}