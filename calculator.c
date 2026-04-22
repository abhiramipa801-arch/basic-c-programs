#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch(op)
{
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("ERROR (Division by zero)");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
