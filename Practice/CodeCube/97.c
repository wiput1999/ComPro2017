#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *) b);
}

int main(void) {
    int ans[200000];

    int i, num, index = 0;

    scanf("%d", &num);

    for (i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            if (num / i == i)
                ans[index++] = i;
            else {
                ans[index++] = i;
                ans[index++] = (int)num/i;
            }
        }
    }

    qsort(ans, index, sizeof(int), cmp);

    for(i = 0; i < index; i++)
        printf("%d ", ans[i]);
    return 0;
}