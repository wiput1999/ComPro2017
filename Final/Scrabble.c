#include <stdio.h>
#include <string.h>

int values[200];

int calculate(char str[]);

int main(void)
{

    int score;
    int max_score = -1;
    int result;
    char scores[100];
    char str[6969];
    char max_str[2000];

    scanf("%s", scores);

    for (int i = 0; i < strlen(scores); i++)
    {
        scanf("%d ", &score);
        values[scores[i]] = score;
    }

    scanf("%[^\n]s", str);

    char *word = strtok(str, " ");

    while (word != NULL)
    {
        result = calculate(word);
        if (result > max_score)
        {
            strcpy(max_str, word);
            max_score = result;
        }
        word = strtok(NULL, " ");
    }

    printf("%s %d", max_str, max_score);

    return 0;
}

int calculate(char str[])
{
    int size = strlen(str);
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result += values[str[i]];
    }

    return result;
}
