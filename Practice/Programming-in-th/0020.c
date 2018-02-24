#include <stdio.h>

int main(void) {

    int total[5], winner, temp = 0, score, max = -1;

    for (int i = 0; i < 5; i++) {
        temp = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            temp += score;
        }
        total[i] = temp;
    }

    for (int i = 0; i < 5; i++) {
        if (total[i] > max) {
            winner = i + 1;
            max  = total[i];
        }
    }

    printf("%d %d", winner, max);

    return 0;
}