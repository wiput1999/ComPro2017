#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char str[151], *token, sep[2] = " ", temp[151];
    int count = 0;

    scanf("%[^\n]s", str);

    strcpy(temp, str);

    token = strtok(temp, sep);

    while (token != NULL) {
        token = strtok(NULL, sep);

        count++;
    }

    printf("%d words\n", count);
    printf("----\n");

    token = strtok(str, sep);

    while (token != NULL) {
        for (int i = 0; i < strlen(token); i++) printf("%c", tolower(token[i]));
        printf(" : %lu\n", strlen(token));
        token = strtok(NULL, sep);
    }
}