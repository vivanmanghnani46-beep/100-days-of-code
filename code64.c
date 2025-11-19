#include <stdio.h>

int main() {
    int n, digit, count[10] = {0}, max = 0, ans = 0;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            ans = i;
        }
    }

    printf("Most frequent digit = %d", ans);
    return 0;
}
