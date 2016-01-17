/* Question 1-b */

/* Division by zero using float variable */


#include <stdio.h>

main()

{

   float a , b, c;

   printf("Enter the numerator and denominator \n");

   scanf("%f %f" , &a ,&b);

   c = a / b;

   printf("The answer is %f \n" ,c);  
		
} 		/* Gives ans as inf */

