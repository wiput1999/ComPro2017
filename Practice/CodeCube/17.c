#include <stdio.h>

int main(void) {
    int len_text, len_search, count = 0, similar;
    char text[1000], search[1000];

    scanf("%d", &len_text);
    scanf("%d", &len_search);
    scanf("%s", text);
    scanf("%s", search);

    for (int i = 0; i < len_text - len_search; i++) {
        similar = 0;
        for (int j = 0; j < len_search; j++) {
            if (text[i + j] == search[j]) {
                similar++;
            }
        }
        if (similar == len_search) count++;
    }

    printf("%d", count);

}