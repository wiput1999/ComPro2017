#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char str[151], find;
    int count = 0;

    scanf("%c %[^\n]s", &find, str);

    for (int i = 0; i < strlen(str); i++) if (tolower(str[i]) == tolower(find)) count++;

    printf("%d", count);

    return 0;
}