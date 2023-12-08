#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        return 1; // Return an error code
    }
    int days;
    switch(month) {
        case 2: // February
            days = 28;
            break;
        case 4: case 6: case 9: case 11: // April, June, September, November
            days = 30;
            break;
        default: // All other months
            days = 31;
            break;
    }

    
    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}

