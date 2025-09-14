#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char first_name[100];
    char last_name[100];
    int id;
    int age;
    float note;
} Students;

typedef struct {
    int code;
    char course_name[100];
    int creadit;
    float note;
} Course;

Students students[MAX];
Course cours[MAX];
int nbStudent = 0;
int nbCourse = 0;

void addStudent() {
    char choice = 'y';
    while(choice == 'y' || choice == 'Y') {
        if(nbStudent < MAX){
            printf("Enter first name: ");
            scanf("%s", students[nbStudent].first_name);
            printf("Enter last name: ");
            scanf("%s", students[nbStudent].last_name);
            printf("Enter ID: ");
            scanf("%d", &students[nbStudent].id);
            printf("Enter age: ");
            scanf("%d", &students[nbStudent].age);
            printf("Enter note: ");
            scanf("%f", &students[nbStudent].note);
            nbStudent++;
        } else {
            printf("Student list is full!\n");
            break;
        }

        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice);
    }
}

void addCourse() {
    if(nbCourse < MAX){
        printf("Enter course name: ");
        scanf("%s", cours[nbCourse].course_name);
        printf("Enter course code: ");
        scanf("%d", &cours[nbCourse].code);
        printf("Enter course credit: ");
        scanf("%d", &cours[nbCourse].creadit);
        printf("Enter course note: ");
        scanf("%f", &cours[nbCourse].note);
        nbCourse++;
    } else {
        printf("Course list is full!\n");
    }
}

void showSinfo() {
    if(nbStudent == 0){
        printf("No students available.\n");
        return;
    }
    for(int i=0; i<nbStudent; i++){
        printf("%s %s | Age: %d | ID: %d | Note: %.2f\n",
               students[i].first_name,
               students[i].last_name,
               students[i].age,
               students[i].id,
               students[i].note);
    }
}

void showScours() {
    if(nbCourse == 0){
        printf("No courses available.\n");
        return;
    }
    for(int i=0; i<nbCourse; i++){
        printf("%s | Code: %d | Credit: %d | Note: %.2f\n",
               cours[i].course_name,
               cours[i].code,
               cours[i].creadit,
               cours[i].note);
    }
}

int main() {
    int n;

    do {
        printf("\n------- Welcome -------\n");
        printf("1 -> Add a student\n");
        printf("2 -> Add a course\n");
        printf("3 -> Show students list\n");
        printf("4 -> Show courses list\n");
        printf("0 -> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch(n) {
            case 1: addStudent(); break;
            case 2: addCourse(); break;
            case 3: showSinfo(); break;
            case 4: showScours(); break;
            case 0: printf("Bye!\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(n != 0);

    return 0;
}
