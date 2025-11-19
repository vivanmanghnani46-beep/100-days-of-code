#include <stdio.h>

int main() {
    int a[10][10], n, i, j, diag[10], count = 0, flag = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        diag[i] = a[i][i];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (diag[i] == diag[j])
                flag = 0;

    if (flag) printf("Distinct");
    else printf("Not distinct");

    return 0;
}
