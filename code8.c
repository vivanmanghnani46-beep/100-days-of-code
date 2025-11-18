#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
