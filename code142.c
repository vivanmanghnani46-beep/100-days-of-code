#include <stdio.h>

struct Student {
    char name[20];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i=0; i<5; i++) {
        printf("Enter name roll marks for student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for(i=0; i<5; i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}
