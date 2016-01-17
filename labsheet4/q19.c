/* question 19 */

/* sum of series 1 + 1/2 + 1/3+... */

#include <stdio.h>

main()

{

  int n;
 
  float sum = 0 ,i = 1;

  printf("enter n\n");

  scanf("%d" ,&n);

  while (i <= n)

   {

     sum = sum + 1/i;

     i++;

   }

  printf("sum of series 1 +... + 1/n  is %f\n" ,sum);

}
  
