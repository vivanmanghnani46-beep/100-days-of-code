#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s = {"Amit", 10, 88.5};
    printStudent(s);
    return 0;
}
