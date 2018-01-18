// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)

#include <stdio.h>

int main(void) {
    // Just main function here!

    char alpha;

    for (int i = 0; i < 5; i++) {
        scanf(" %c", &alpha);
        if (i % 2 == 0) {
            alpha += 1;
        }
        printf("%c\n", alpha);
    }

    return 0;
}
