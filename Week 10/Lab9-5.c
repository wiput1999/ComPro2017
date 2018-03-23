#include <stdio.h>
#include <string.h>

int main(void) {

    char str[1000], *token, sep[2] = " ";
    int word = 0, character = 0, line = 0;

    while (1) {
        scanf(" %[^\n]s", str);

        if (strlen(str) == 1 && str[0] == '.') break;

        line++;

        token = strtok(str, sep);

        while (token != NULL) {
            word++;
            character += strlen(token);
            token = strtok(NULL, sep);
        }
    }

    printf("Char = %d, word = %d, line = %d", character, word, line);
}