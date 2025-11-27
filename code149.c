#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *p;

    p = (struct Person *)malloc(sizeof(struct Person));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("\nDetails of the person:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    free(p);

    return 0;
}
