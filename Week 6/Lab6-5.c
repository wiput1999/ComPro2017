#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    char str[300], find;
    int temp = 0, position[300];

    scanf("%[^\n]s", str);
    scanf(" %c", &find);

    int length = strlen(str);

    for(int i = 0; i < length; i++) {
        if (isupper(str[i])) str[i] += 32;
    }


    for(int i = 0; i < length; i++) {
        if (str[i] == find) {
            position[temp] = (i + 1);
            temp++;
        }
    }

    if (temp) {
        printf("There is/are %d \"%c\" in the above sentences.\n", temp, find);
        printf("Position: ");
        for(int i = 0; i < temp; i++) {
            printf("%d", position[i]);
            if (i != temp - 1) printf(", ");
        }
    } else printf("Not found.");

    return 0;
}