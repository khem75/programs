
#include <stdio.h>

int main() {
double length, width, height, surface area, and volume;
printf("khem raj joshi \n");
printf("Enter the length of the cuboid: ");
scanf("%lf", &length);

printf("Enter the width of the cuboid: ");
scanf("%lf", &width);

printf("Enter the height of the cuboid: ");
scanf("%lf", &height);

surfaceArea = 2 * (length * width + width * height + height * length);

volume = length * width * height;

printf("The surface area of the cuboid is: %.2lf\n", surfaceArea);
printf("The volume of the cuboid is: %.2lf\n", volume);

return 0;
}

