#include <stdio.h>

int main() {
    int a[10][10], n, i, j, start;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // upper diagonals including main
    for (start = 0; start < n; start++) {
        i = 0;
        j = start;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // lower diagonals
    for (start = 1; start < n; start++) {
        i = start;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
