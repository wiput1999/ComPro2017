#include <stdio.h>
#include <string.h>

int main(void) {

    char str[10000], temp[10000];
    int len, tmplen = 0;

    scanf("%s", str);

    while (1) {
        len = strlen(str);
        tmplen = 0;
        for (int i = 0; i < len; i++) {
            if (str[i] == str[i + 1]) {
                i++;
                continue;
            }
            temp[tmplen++] = str[i];
        }
        temp[tmplen] = '\0';

        if (tmplen == len) break;

        printf("%s\n", temp);        

        strcpy(str, temp);
    }

    return 0;
}