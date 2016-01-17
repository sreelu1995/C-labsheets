/* question 18 */

/* sum of squares of first even nos. */

#include <stdio.h>

#include <math.h>

main()

{

   int i = 0 ,sum = 0 ,n;

   printf("enter nth number\n");

   scanf("%d",&n);

   while(i <= n)

   {
      sum = sum + pow(i,2);

      i = i + 2;

   }
  
   printf("sum of squares of even nos till %d is %d\n" ,n,sum);

}

      
     

      
