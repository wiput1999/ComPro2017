#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(a, b);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    char str[n][100];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]s", str[i]);
    }

    qsort(str, n, sizeof(str[0]), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}