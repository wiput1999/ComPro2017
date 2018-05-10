#include <stdio.h>
#include <string.h>

int max(int a, int b);

int main(void)
{

    char str1[6969];
    char str2[6969];

    scanf("%[^\n]s", str1);
    scanf(" %[^\n]s", str2);

    char *ptr1, *ptr2;

    char *word1 = strtok_r(str1, " ", &ptr1);
    char *word2 = strtok_r(str2, " ", &ptr2);

    int len1, len2;

    while (word1 != NULL || word2 != NULL)
    {
        len1 = strlen(word1);
        len2 = strlen(word2);

        int max_len = max(len1, len2);
        // printf("%s %s %d\n", word1, word2, max_len);

        for (int i = 0; i < max_len; i++)
        {
            if (i < len1)
                printf("%c", word1[i]);
            if (i < len2)
                printf("%c", word2[i]);
        }

        printf(" ");

        word1 = strtok_r(NULL, " ", &ptr1);
        word2 = strtok_r(NULL, " ", &ptr2);
    }

    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}