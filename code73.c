#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, rowSum[10];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }

    for (i = 0; i < r; i++)
        printf("Row %d Sum = %d\n", i + 1, rowSum[i]);

    return 0;
}
