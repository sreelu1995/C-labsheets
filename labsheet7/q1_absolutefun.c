/* functions and arrays */

/* question 1 and 2 */

/* absolute value */

#include <stdio.h>

float abs(float arg)

{
  if(arg < 0)
    return -arg;

  else 
    return arg;

}

main()
{

  float inval;
   
  printf("Enter an integer:\n");
  
  scanf("%f", &inval);
  
  printf("Absolute value is: %f\n", abs(inval) );

}
  
