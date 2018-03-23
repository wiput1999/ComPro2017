#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define cap(text) { \
    text[0] = toupper(text[0]); \
    for (int i = 1; i < strlen(text); i++) text[i] = tolower(text[i]); \
}

char key[10];

typedef struct {
    char name[100];
    char surname[100];
    char sex[15];
    int age;
    char id[15];
    double gpa;
} student_info;

int compare(const void * a, const void * b) {
    student_info *ia = (student_info *) a;
    student_info *ib = (student_info *) b;

    if (!strcmp(key, "Name")) return strcmp(ia->name, ib->name);
    if (!strcmp(key, "Surname")) return strcmp(ia->surname, ib->surname);
    if (!strcmp(key, "Id")) return strcmp(ia->id, ib->id);
    return 0;
}

int main(void) {

    char first[100], last[100];
    student_info students[20];

    for (int i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %lf", first, last, students[i].sex, &students[i].age, students[i].id, &students[i].gpa);

        cap(first);
        cap(last);
        
        strcpy(students[i].name, first);
        strcpy(students[i].surname, last);

        if (!strcmp(students[i].sex, "Male")) strcpy(students[i].sex, "Mr");
        else strcpy(students[i].sex, "Miss");
    }

    scanf("%s", key);

    cap(key);

    qsort(students, 20, sizeof(student_info), compare);

    for(int i = 0; i < 20; i++) printf("%s %c %s (%d) ID: %s GPA %.2lf\n", students[i].sex, students[i].name[0], students[i].surname, students[i].age, students[i].id, students[i].gpa);


    return 0;

}