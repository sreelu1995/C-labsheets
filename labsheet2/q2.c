/* question 2*/

/* converstion by reading exchange rate from user*/

#include <stdio.h>
main()

{
  float dollars, rupees, rate;

  printf("Enter the amount in dollars:\n");

  scanf("%f" , &dollars);
 
  printf("Enter the current conversion rate:\n");

   scanf("%f" , &rate);

  rupees = dollars * rate;

  printf("The amount in rupees is %f\n" ,rupees);

}

