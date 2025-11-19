#include <stdio.h>

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    int hcf = a;
    int lcm = (x * y) / hcf;

    printf("LCM = %d\n", lcm);

    return 0;
}
