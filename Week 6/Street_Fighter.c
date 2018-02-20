#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int energy, a, b, combo = 1, team = 0;
    char action[3000], last, current;

    scanf("%i %s", &energy, action);

    a = energy;
    b = energy;

    for (int i = 0; i < strlen(action); i++) {
        
        current = action[i];

        if (current == '0' || current == '2' || current == '4' || current == '6' || current == '8') {
            b--;
            team = 0;
        }
        else {
            a--;
            team = 1;
        }

        if (i != 0) {
            if (last == current) combo++;
            else combo = 1;

            if (combo == 3) {
                // 1 complete combo!
                if (team) a -= 3;
                // 0 complete combo!
                else b -= 3;

                combo = 0;
            }
        }
        last = action[i];
    }

    if (a == b) printf("-");
    else if (a > b) printf("0");
    else printf("1");

    printf(" %d %d", a, b);

    return 0;
}