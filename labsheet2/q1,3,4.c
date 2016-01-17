/* Conversion of dollars into rupees */

#include <stdio.h>
#include "exchange.h"

main()
{

   float dollars,rupees;


    printf(" Enter the amount in dollars \n");
  
   scanf("%f" ,&dollars);

  	
    rupees = dollars * RATE;

    printf("The amount in rupees is %f \n",rupees);


}
