// Computer Programming Laboratory Week 2
// Wiput Pootong (60070090)

#include <stdio.h>

int main(void) {
    // Just main function here!
    char firstname[32], lastname[32], id[10];
    int date, month, year;
    float grade;

    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &grade);

    printf("Fullname: %s %s\n", firstname, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%02d\n", date, month, year);
    printf("GPA: %.2f", grade);

    
    return 0;
}
