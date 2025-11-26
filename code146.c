#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Employee {
    char name[20];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Rohan", 101, {12, 5, 2022}};

    printf("Name: %s\nID: %d\nJoining: %d-%d-%d\n",
           e.name, e.id, e.join.d, e.join.m, e.join.y);

    return 0;
}
