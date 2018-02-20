#include <stdio.h>

int check(int number);

int main(void) {

    int n, result = 0;
    
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(check(i)) {
            result += i;
        }
    }

    printf("%d", result);

    return 0;
}

int check(int number) {
    
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) count++;
    }
    
    if (count != 8) return 0;
    return 1;
}