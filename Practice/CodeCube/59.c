#include <stdio.h>

int main(void) {

    char alpha[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int row, col, count = 0;

    scanf("%d", &row);
    scanf("%d", &col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", alpha[count % 26]);
            count++;
        }
        printf("\n");
    }

    return 0;
}