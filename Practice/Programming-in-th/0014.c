#include <stdio.h>

int hcf(int number1, int number2) {
    if (number2 == 0) return number1;
    return hcf(number2, number1 % number2);
}

int main(void) {

    int num1, num2, result;

    scanf("%d", &num1);
    scanf("%d", &num2);

    result = hcf(num1, num2);

    printf("%d", result);

    return 0;
}