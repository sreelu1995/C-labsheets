/* Question 25 */

/* Absolute value of an integer */

#include <stdio.h>

main()

{

   int a ,b;

   printf("Enter an integer\n");

   scanf("%d" ,&a);
  
  if (a<0)
   {

     b = a*-1; 
   
      printf("Absolute value of integer is %d\n",b);

   }

  else 
      printf("Absolute value of integer is %d\n" ,a);

}
