/* Question 17 */

/* sum of cubes */

#include <stdio.h>
#include <math.h>

main()

{
  
  int n, i, sum ;

  printf("enter n :\n");

  scanf("%d" ,&n);

  for(i = 1 ;i <= n ; i++)

      sum = sum + pow(i,3);

   printf("sum = %d\n" , sum);

}

  
