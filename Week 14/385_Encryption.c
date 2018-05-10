#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            str[i] -= 3 * (i % 3 == 0) + 8 * (i % 3 == 1) + 5 * (i % 3 == 2);
            str[i] += 26 * (str[i] < 'a');
        }
        else
        {
            str[i] -= 3 * (i % 3 == 0) + 8 * (i % 3 == 1) + 5 * (i % 3 == 2);
            str[i] += 26 * (str[i] < 'A');
        }
    }

    printf("%s\n", str);

    return 0;
}