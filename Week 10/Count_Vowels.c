#include <stdio.h>
#include <string.h>

int main(void) {

    char str[1001];
    int count = 0;

    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str); i++) {
        switch(str[i]) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }

    printf("%d", count);

    return 0;
}