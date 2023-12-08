#include <stdio.h>
int main() {
    int n;
    printf("khem raj joshi\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1; 
    }
 int largest;
    int first = 1; 

    for (int i = 0; i < n; ++i) {
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (first || (num > largest)) {
            largest = num;
            first = 0; // Set the flag to 0 after the first number is entered
        }
    }
    printf("The largest number is: %d\n", largest);

    return 0; 
}

