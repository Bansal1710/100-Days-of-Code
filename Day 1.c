#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);

    if (num2 != 0)
        printf("Quotient = %.2f\n", (float)num1 / num2);
    else
        printf("Quotient = Cannot divide by zero\n");

    return 0;
}
