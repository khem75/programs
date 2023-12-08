
#include <stdio.h>
#include <math.h>
double areaOfRightAngledTriangle(double base, double height) {
return 0.5 * base * height;
}
double areaOfIsoscelesTriangle(double base, double equalSide) {
double height = sqrt(pow(equalSide, 2) - pow(base / 2, 2));
return 0.5 * base * height;
}
double area Of Any Triangle(double a, double b, double c) {
double s = (a + b + c) / 2; // Semi-perimeter
return sqrt(s * (s - a) * (s - b) * (s - c));
}

