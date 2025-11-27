#include <stdio.h>
#include <string.h>


struct Person {
    char name[50];
    int age;
};


int areIdentical(struct Person p1, struct Person p2) {
    
    if (strcmp(p1.name, p2.name) == 0 && p1.age == p2.age) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    struct Person person1, person2;

    
    printf("Enter name and age for person 1: ");
    scanf("%s %d", person1.name, &person1.age);

    
    printf("Enter name and age for person 2: ");
    scanf("%s %d", person2.name, &person2.age);

    
    if (areIdentical(person1, person2)) {
        printf("The structs are identical.\n");
    } else {
        printf("The structs are not identical.\n");
    }

    return 0;
}
