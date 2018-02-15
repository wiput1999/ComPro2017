#include <stdio.h>
#include <string.h>

int main(void) {

    int count, tail, start, valid;
    char string[101];

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%s", string);
        
        start = 0;
        tail = strlen(string) - 1;
        valid = 1;

        while (tail > start) {
            if (string[start++] != string[tail--]) valid = 0;
        }

        if (valid) printf("%s\n", string);

    }

    return 0;
}