/* Question 13 */
/* Temperature conversion */

#include <stdio.h>

main()

{ 
  
  float celsius , fahrenheit ;
  

  printf("Enter the temperature in fahrenheit:\n");

  scanf("%f" , &fahrenheit);

  celsius = 5*(fahrenheit - 32)/9;

  printf("The temperature in degrees celsius is %f\n",celsius);


}

  
