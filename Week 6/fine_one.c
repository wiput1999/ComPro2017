#include <stdio.h>
#include <string.h>

int main(void) {

    int count = 0, consec, valid;
    char number[101];

    scanf("%d", &consec);
    scanf("%s", number);

    int len = strlen(number) - consec;

    for (int i = 0; i <= len; i++) {
        valid = 1;
        for (int j = i; j < i + consec; j++) {
            if (number[j] != '1') {
                valid = 0;
                break;
            }
        }

        if(valid) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}