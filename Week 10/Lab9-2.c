#include <stdio.h>
#include <string.h>

int main(void) {

    int width;
    char str1[64], str2[64];

    scanf("%d", &width);
    scanf(" %[^\n]s", str1);
    scanf(" %[^\n]s", str2);

    // Top border
    for (int i = 0; i < width; i++) printf("*");
    printf("\n");

    printf("*");
    for (int i = 0; i < ((width - strlen(str1)) / 2 - 1); i++) printf(" ");
    if ((width % 2 == 1 && strlen(str1) % 2 == 0) || (width % 2 == 0 && strlen(str1) % 2 == 1)) printf(" ");
    printf("%s", str1);
    for (int i = 0; i < ((width - strlen(str1)) / 2 - 1); i++) printf(" ");
    printf("*");
    printf("\n");

    printf("*");
    for (int i = 0; i < ((width - strlen(str2)) / 2 - 1); i++) printf(" ");
    if ((width % 2 == 1 && strlen(str2) % 2 == 0) || (width % 2 == 0 && strlen(str2) % 2 == 1)) printf(" ");
    printf("%s", str2);
    for (int i = 0; i < ((width - strlen(str2)) / 2 - 1); i++) printf(" ");
    printf("*");

    // Bottom border
    printf("\n");
    for (int i = 0; i < width; i++) printf("*");

    return 0;
}