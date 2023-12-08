               int main() {
    int num1, num2, num3;
    printf("KHEM RAJ JOSHI\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    num1 = num1 + num2 + num3;
    num2 = num1 - (num2 + num3);
    num3 = num1 - (num2 + num3);
    num1 = num1 - (num2 + num3);

    printf("After swapping, num1 is: %d\n", num1);
    printf("After swapping, num2 is: %d\n", num2);
    printf("After swapping, num3 is: %d\n", num3);

    return 0;
}

