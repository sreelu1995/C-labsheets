/* Question 14 */

/* Area and perimeter of circle */

#include <stdio.h>

#define PI 3.1415

main() 

{

  float area , radius , perimeter;

  printf("Enter the radius\n");

  scanf("%f" ,&radius);

  perimeter = 2 * PI * radius;

  area = PI * radius * radius;

  printf("The perimeter is %f\n" ,perimeter);

  printf("The area is %f\n" ,area);

}
