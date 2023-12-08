#include <stdio.h>

int main() {
    double num1, num2, result;
    printf("khem raj joshi\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    (division by zero is undefined)
    if (num2 != 0) {
        result = num1 / num2;
        printf("The result of %.2lf divided by %.2lf is: %.2lf\n", num1, num2, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

