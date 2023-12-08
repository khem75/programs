
#include <stdio.h>

int main() {
char gender;

printf("khem raj joshi \n");
printf("Enter gender (M/F): ");
scanf(" %c", &gender);

switch (gender) {
case 'M':
case 'm':
printf("Male\n");
break;
case 'F':
case 'f':
printf("Female\n");
break;
default:
printf("Invalid gender input\n");
}

return 0;
}
 

