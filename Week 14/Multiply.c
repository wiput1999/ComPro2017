#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char numbers[6969];
    int expected;
    int count = 0;

    scanf("%s", numbers);
    scanf("%d", &expected);

    int length = strlen(numbers);

    for (int i = length - 1; i > 0; i--)
    {
        int num1 = numbers[i] - '0';
        int num2 = numbers[i - 1] - '0';

        if (num1 * num2 == expected)
        {
            printf("%d %d\n", num1, num2);
            count++;
        }
    }

    if (count == 0)
        printf("none");
}