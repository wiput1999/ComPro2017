#include <stdio.h>

int main(void) {

    double price, discount, quantity;

    scanf("%lf", &price);
    scanf("%lf", &discount);
    scanf("%lf", &quantity);

    double free_count = (int) (quantity / 3);
    double discount_rate = (discount / 100) * quantity;

    if (discount_rate >= free_count) {
        printf("Discount %.0lf%%\n", discount);
        printf("%.2lf", (quantity - discount_rate) * price);
    } else {
        printf("Buy 2 Get 1\n");
        printf("%.2lf", (quantity - free_count) * price);
    }


    return 0;
}