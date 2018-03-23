#include <stdio.h>
#include <string.h>

int main(void) {
    char string[1000];

    scanf("%[^\n]s", string);

    int len = strlen(string);

    for (int i = 0; i < len; i++) {
        if (string[i] != ' ') printf("%c", string[i]);
    }

    return 0;
}