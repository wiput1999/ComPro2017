// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)

#include <stdio.h>

int main(void) {
    // Just main function here!
    char fname1[32], sname1[32], person2[32], person3[32];

    scanf("%s %s %[^\n] %[^\n]", fname1, sname1, person2, person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);


    return 0;
}
