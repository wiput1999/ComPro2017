#include <stdio.h>
#include <string.h>

int main(void) {
    char action[50];

    scanf("%s", action);

    int i, position = 1, len = strlen(action);

    for (i = 0; i < len; i++) {
        switch(action[i]) {
            case 'A':
                if (position == 1) position = 2;
                else if (position == 2) position = 1;
                break;
            case 'B':
                if (position == 2) position = 3;
                else if (position == 3) position = 2;
                break;
            case 'C':
                if (position == 3) position = 1;
                else if (position == 1) position = 3;
                break;
        }
    }

    printf("%d", position);

    return 0;
}