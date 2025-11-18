#include <stdio.h>

int main() {
    int a, b, c;

    // Input side lengths
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for valid triangle using triangle inequality
    if (a + b > c && a + c > b && b + c > a) {

        // Triangle type
        if (a == b && b == c) {
            printf("The triangle is Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles\n");
        }
        else {
            printf("The triangle is Scalene\n");
        }
    }
    else {
        printf("Invalid Triangle! Sum of any two sides must be greater than the third.\n");
    }

    return 0;
}
