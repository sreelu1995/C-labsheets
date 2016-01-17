/* Question 12 */
/* Time conversion program using float variables */

#include <stdio.h>

#define min 60

#define hour 3600

main()

{

  float x , y , z;

  printf(" Enter the time in seconds\n");

  scanf("%f" , &x);
 
  y = x / min ;

  z = x / hour;

  printf("The time in min is %.2f\n",y);

  printf("The time in hours is %.2f\n",z);

}
  
