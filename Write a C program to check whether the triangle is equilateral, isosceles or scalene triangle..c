#include <stdio.h>
int main() {
  
  float side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 

   if (side1 == side2 && side2 == side3) {

  printf("It is an equilateral triangle.\n");
   } else if (side1 == side2 || side1 == side3 || side2 == side3) {

            printf("It is an isosceles triangle.\n");
        } else {

            printf("It is a scalene triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}

