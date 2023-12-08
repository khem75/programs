
#include <stdio.h>
int main() {
double side, area, volume;
printf("khem raj joshi \n");
printf("Enter the length of one side of the cube: ");
scanf("%lf", &side);
area = 6 * side * side;
volume = side * side * side;
printf("The surface area of the cube is: %.2lf\n", area);
printf("The volume of the cube is: %.2lf\n", volume);

return 0;
}

