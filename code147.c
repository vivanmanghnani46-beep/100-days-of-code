#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e1 = {101, "Rohan", 50000};
    struct Employee e2;

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("ID=%d Name=%s Salary=%.2f\n", e2.id, e2.name, e2.salary);
    return 0;
}
