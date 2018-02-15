#include <stdio.h>

int main(void) {

    double matrix_a[3][3], matrix_b[3][3], result[3][3], sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_b[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += (matrix_a[i][k] * matrix_b[k][j]);
            }

            result[i][j] = sum;
        }
    }

    printf("A x B\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}