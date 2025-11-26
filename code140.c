#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p = {"John", MALE};

    printf("Name: %s\n", p.name);
    printf("Gender: %s\n", (p.g == MALE) ? "Male" : "Female");
    return 0;
}
