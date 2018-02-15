#include <stdio.h>
#include <string.h>

int main(void) {

    int size;
    char string[101];

    scanf("%[^\n]", string);

    size = (int) strlen(string) - 1;

    for (int i = size; i >= 0; i--) printf("%c", string[i]);

    return 0;
}