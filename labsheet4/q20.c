/* Question 20 */

/* sum of series 1 + 1/2^2 +.... */

#include <stdio.h>

#include <math.h>

main()

{

  int n;

  float i ,sum;

  printf("enter n\n");

  scanf("%d" ,&n);

  for(i = 1, sum = 0 ; i <= n ; i++)

     sum = sum + (1/pow(i,2));

   printf("sum = %f\n", sum);

}
