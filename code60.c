#include <stdio.h>

int main() {
    int a[100], n, i, p = 0, ne = 0, z = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) p++;
        else if (a[i] < 0) ne++;
        else z++;
    }

    printf("Positive=%d\nNegative=%d\nZero=%d", p, ne, z);
    return 0;
}
