#include <stdio.h>

int main() {
    int i, j;
    int rows[] = {1, 3, 5, 3, 1};
    int k = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < rows[k]; j++) {
            printf("*\n");
        }
        printf("\n");
        k++;
    }

    return 0;
}
