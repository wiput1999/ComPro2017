#include <stdio.h>

int main(void) {

    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a + b > c && b + c > a && a + c > b) printf("Triangle is valid.");
    else printf("Triangle is not valid.");

    return 0;
}