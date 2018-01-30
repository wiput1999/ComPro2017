#include <stdio.h>
#include <ctype.h>

int main(void) {

    char character;

    scanf("%c", &character);

    if (islower(character)) {
        printf("lowercase");
    } else if (isupper(character)) {
        printf("uppercase");
    } else if (isdigit(character)) {
        printf("number");
    } else {
        printf("error");
    }

    return 0;

}