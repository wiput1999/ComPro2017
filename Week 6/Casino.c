#include <stdio.h>
#include <string.h>

int main(void) {

    int ball[] = {0, 0, 0}, temp;
    char start, command[40], pos[] = "LCR";

    scanf("%[^\n]s", command);

    start = command[0];

    if (start == 'L') ball[0] = 1;
    else if (start == 'C') ball[1] = 1;
    else if (start == 'R') ball[2] = 1;

    int len = strlen(command);

    for(int i = 2; i < len; i++) {
        if (command[i] == 'A') {
            temp = ball[0];
            ball[0] = ball[1];
            ball[1] = temp;
        }
        else if (command[i] == 'B') {
            temp = ball[1];
            ball[1] = ball[2];
            ball[2] = temp;
        }
        else if (command[i] == 'C') {
            temp = ball[0];
            ball[0] = ball[2];
            ball[2] = temp;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (ball[i]) {
            printf("%c", pos[i]);
            break;
        }
    }

    return 0;
}