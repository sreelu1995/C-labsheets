/* Question 1-a */

/* Division by 0 using int. */ 

#include <stdio.h>

main()

{

   int a , b , c;

   printf("Enter the numerator and denominator \n");

   scanf("%d %d" ,&a,&b );

   c = a / b;

   printf(" The answer is %d \n",c);

} 		/* gives floating pt. error exception ,core dumped */

