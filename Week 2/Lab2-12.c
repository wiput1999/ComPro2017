// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)

#include <stdio.h>

int main(void) {
    // Just main function here!

    int number, result = 0;

    scanf("%d", &number);

    result += (number / 1000);

    result += (number % 1000) * 100;

    printf("%d", result);

    return 0;
}
