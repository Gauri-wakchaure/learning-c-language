#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    int marks;
};

int main() {
    int n, i;

    printf("How many students data you want to enter: ");
    scanf("%d", &n);

    struct Student stud[n];  // array of students

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll no: ");
        scanf("%d", &stud[i].rollno);
        printf("Name: ");
        scanf("%s", stud[i].name);
        printf("Marks: ");
        scanf("%d", &stud[i].marks);
    }

    printf("\n--- Details of Students ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d | Name: %s | Marks: %d\n",
               stud[i].rollno, stud[i].name, stud[i].marks);
    }

    return 0;
}
