#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);

    return 0;
}
