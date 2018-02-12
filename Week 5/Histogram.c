#include <stdio.h>

int main(void) {

    char character;
    int sequence[100], temp = 0, count[200], n;

    for (int i = 0; i < 200; i++) count[i] = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %c", &character);
        if (character < 'a') character += 32;
        if (count[character] == 0) {
            sequence[temp] = character;
            count[character]++;
            temp++;
        }
        else {
            count[character]++;
        }
    }

    for(int i = 0; i < temp; i++) {
        printf("%c: %d\n", sequence[i], count[sequence[i]]);
    }

    return 0;

}