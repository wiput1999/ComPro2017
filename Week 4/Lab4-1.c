#include <stdio.h>

int main(void) {

    int number_a, number_b;

    scanf("%d %d", &number_a, &number_b);

    if (number_a == number_b) {
        printf("%d + %d = %d", number_a, number_b, number_a + number_b);
    }
    else {
        printf("%d - %d = %d", number_a, number_b, number_a - number_b);        
    }

    return 0;
}