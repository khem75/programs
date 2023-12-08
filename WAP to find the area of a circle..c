#include <stdio.h>
#include <math.h>

int main() {
double radius, area;
printf("khem raj joshi\n");
printf("Enter the radius of the circle: ");
scanf("%lf", &radius);

area = M_PI * pow(radius, 2);

printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

return 0;
}

