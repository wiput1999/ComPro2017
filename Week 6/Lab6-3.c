#include <stdio.h>

int main(void) {
    double matrix[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    if (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2] && matrix[1][1] == matrix[2][2]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == j) continue;
                if (matrix[i][j] > 0) {
                    printf("This is not a scalar matrix");
                    return 0;
                }
            }
        }
        printf("This is a scalar matrix");
        return 0;
    }
    printf("This is not a scalar matrix");

    return 0;
}