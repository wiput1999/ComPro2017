#include <stdio.h>

int main(void) {

    int a, b, c, area1, area2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    area1 = b - a - 1;
    area2 = c - b - 1;

    if (area1 > area2) printf("%d", area1);
    else printf("%d", area2);

    return 0;
}