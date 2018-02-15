#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define swap(a, b) {\
    char temp[61];\
    strcpy(temp, b);\
    strcpy(b, a);\
    strcpy(a, temp);\
    }

int main(void) {

    char name[20][61], string[61];

    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]s", string);

        int space = -1, length = (int) strlen(string);

        for (int j = 0; j < length; j++) if (string[j] == ' ') space = j + 1;

        if (islower(string[0])) string[0] -= 32;
        if (space != -1) if (islower(string[space])) string[space] -= 32;

        for (int j = 1; j < length; j++) {
            if ((j == space || j == space - 1) && space != -1) continue;
            if (isupper(string[j])) string[j] += 32;
        }

        strcpy(name[i], string);
    }

    int size = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (strcmp(name[i], name[j]) < 0) swap(name[i], name[j]);
        }
    }

    for(int i = 0; i < 20; i++) printf("%s\n", name[i]);

    return 0;
}