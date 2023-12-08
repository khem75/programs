
#include <stdio.h>

int main() {
int num, shift;
{
printf("\n");
printf("Enter a positive integer: ");
scanf("%d", &num);
if (num <= 0) {
printf("Please enter a positive integer.\n");
}
} while (num <= 0);
printf("Enter the number of positions to shift right: ");
scanf("%d", &shift);

int result = num >> shift;

printf("Result of right shift: %d >> %d = %d\n", num, shift, result);

return 0;
}

