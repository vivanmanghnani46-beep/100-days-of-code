#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int i, top = 0;
    for(i=1; i<n; i++)
        if(s[i].marks > s[top].marks)
            top = i;
    return s[top];
}

int main() {
    struct Student s[3] = {
        {"A", 1, 80},
        {"B", 2, 95},
        {"C", 3, 90}
    };

    struct Student t = getTopper(s, 3);

    printf("Topper: %s %d %.2f\n", t.name, t.roll_no, t.marks);
    return 0;
}
