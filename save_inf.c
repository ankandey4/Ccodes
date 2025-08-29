#include <stdio.h>
#include<string.h>

typedef struct id {
    char roll[20];
    char name[30];
    float cgpa;
    char g;
} id;

int main() {
    id s;
    FILE *ptr;

    ptr = fopen("students.txt", "w");
    if (ptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter student ID: ");
    scanf("%s", s.roll);

    printf("Enter student name: ");
    getchar(); // flush newline
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';


    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("Enter grade: ");
    scanf(" %c", &s.g);

    fprintf(ptr, "ID: %s\n", s.roll);
    fprintf(ptr, "Name: %s\n", s.name);
    fprintf(ptr, "CGPA: %.2f\n", s.cgpa);
    fprintf(ptr, "Grade: %c\n", s.g);
    fprintf(ptr, "-----------------------------\n");

    fclose(ptr);
    printf("Student information saved successfully.\n");

    return 0;
}
