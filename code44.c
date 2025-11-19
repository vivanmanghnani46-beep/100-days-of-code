#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1, denominator = 2;

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum = %.2f", sum);
    return 0;
}
