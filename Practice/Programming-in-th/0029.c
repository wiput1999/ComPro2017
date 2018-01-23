#include <stdio.h>
#include <math.h>

int main(void) {
    int step, dest, result;

    scanf("%d", &step);
    scanf("%d", &dest);

    result = dest / step;

    if (dest % step != 0) result++;

    if (dest < step) result = 2;

    printf("%d", result);

    return 0;
}