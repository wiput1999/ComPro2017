#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define cap(text) { \
    text[0] = toupper(text[0]); \
    for (int i = 1; i < strlen(text); i++) text[i] = tolower(text[i]); \
}

typedef struct {
    char name[100];
    char surname[100];
    char sex[15];
    int age;
    char id[15];
    double gpa;
} student_info;

int main(void) {

    char first[100], last[100];
    student_info students;

    scanf("%s %s %s %d %s %lf", first, last, students.sex, &students.age, students.id, &students.gpa);

    cap(first);
    cap(last);
    
    strcpy(students.name, first);
    strcpy(students.surname, last);

    if (!strcmp(students.sex, "Male")) strcpy(students.sex, "Mr");
    else strcpy(students.sex, "Miss");

    printf("%s %c %s (%d) ID: %s GPA %.2lf\n", students.sex, students.name[0], students.surname, students.age, students.id, students.gpa);


    return 0;

}