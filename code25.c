#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c avoids newline issues

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)
                printf("Error! Division by zero.\n");
            else
                printf("Result = %d\n", num1 / num2);
            break;

        case '%':
            if (num2 == 0)
                printf("Error! Modulus by zero.\n");
            else
                printf("Result = %d\n", num1 % num2);
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
