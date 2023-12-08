#include <stdio.h>

int main() {
int num1, num2, temp;
printf("khem raj joshi \n");
printf("Enter the first number: ");
scanf("%d", &num1);

printf("Enter the second number: ");
scanf("%d", &num2);
temp = num1;
num1 = num2;
num2 = temp;

printf("After swapping, num1 is: %d\n", num1);
printf("After swapping, num2 is: %d\n", num2);

return 0;
}

