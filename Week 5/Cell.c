#include <stdio.h>

int main(void) {

    char str[4];

    scanf("%s", str);

    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", str);
    printf("*-*-*\n");
    printf("*****\n");

    return 0;
}