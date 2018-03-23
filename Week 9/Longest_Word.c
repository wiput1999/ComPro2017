#include <stdio.h>
#include <string.h>

typedef struct {
    char text[101];
    int size;
} Word;

int main(void) {

    Word word[1000], max;
    char temp[1000000], *token, sep[2] = " ";
    int n = 0;

    scanf("%[^\n]s", temp);

    token = strtok(temp, sep);    

    while (token != NULL) {

        strcpy(word[n].text, token);
        word[n].size = strlen(token);

        token = strtok(NULL, sep);

        n++;
    }

    max = word[0];

    for (int i = 0; i < n; i++) if (word[i].size > max.size) max = word[i];

    printf("%s", max.text);

    return 0;
}