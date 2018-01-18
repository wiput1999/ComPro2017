// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)

#include <stdio.h>

int main(void) {
    // Just main function here!
    char text1[32], text2[32], text3[32], text4[32];

    scanf("%s", text1);
    scanf("%s", text2);
    scanf("%s", text3);
    scanf("%s", text4);

    printf("String 1: %.3s\n", text1);
    printf("String 2: %.4s\n", text2);
    printf("String 3: %.5s\n", text3);
    printf("String 4: %.6s", text4);
    
    return 0;
}
