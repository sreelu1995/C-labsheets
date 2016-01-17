/* question 13 */

/* finding out sqrt of a positive no. */


#include <stdio.h>

#include <math.h>

main()

{

   float a,b ;

   printf(" enter a real number\n");

   scanf("%f" , &a);

   if(a>0)
   {
    b = sqrt (a);
    
    printf(" the sqrt of entered no is %f\n", b);
    }
    
}
