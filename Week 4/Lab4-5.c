#include <stdio.h>

int main(void) {

    char c;

    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("%c", c - 32);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c", c + 32);        
    } else {
        printf("error");
    }

    return 0;
}