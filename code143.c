#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, top = 0;

    for(i=0; i<5; i++) {
        printf("Enter name roll marks for student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i=1; i<5; i++)
        if(s[i].marks > s[top].marks)
            top = i;

    printf("\nTopper: %s %d %.2f\n", s[top].name, s[top].roll_no, s[top].marks);

    return 0;
}
