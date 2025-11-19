#include <stdio.h>

int main() {
    int a[100], n, key, l = 0, r, mid;

    scanf("%d", &n);
    r = n - 1;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &key);

    while (l <= r) {
        mid = (l + r) / 2;

        if (a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        } else if (key < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    printf("Not found");
    return 0;
}
