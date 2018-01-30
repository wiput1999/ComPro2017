#include <stdio.h>

int main(void) {

    double price, discount, quantity;

    scanf("%lf", &price);
    scanf("%lf", &discount);
    scanf("%lf", &quantity);

    discount = 1 - (discount / 100);

    price *= discount;

    printf("%.2lf", price * quantity);

    return 0;
}