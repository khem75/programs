
#include<stdio.h>
int main() {
    float basic_salary, hra, da, gross_salary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on conditions
    if (basic_salary <= 10000) {
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    } else if (basic_salary <= 20000) {
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    } else {
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }

    // Calculate gross salary
    gross_salary = basic_salary + hra + da;

    // Print the results
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

