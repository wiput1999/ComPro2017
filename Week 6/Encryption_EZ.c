#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char lower[] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z', 'g', 'w', 'i'};
    char upper[26], str[300];

    for(int i = 0; i < 26; i++) upper[i] = lower[i] - 32;

    scanf("%[^\n]s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int result;
        // Uppercase
        if (isupper(str[i])) {
            for(int j = 0; j < 26; j++) {
                if (str[i] == upper[j]) {
                    result = (j - 5) % 26;
                    if (result < 0) result += 26;
                    printf("%c", upper[result]);
                    break;
                }
            }
        }
        // Lowercase
        else if (islower(str[i])) {
            for(int j = 0; j < 26; j++) {
                if (str[i] == lower[j]) {
                    result = (j - 5) % 26;
                    if (result < 0) result += 26;
                    printf("%c", lower[result]);
                    break;
                }
            }
        }
        else printf("%c", str[i]);
    }

    return 0;
}