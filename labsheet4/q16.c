/* Question 16 */

/* sum of squares of nos. */

#include <stdio.h>

main()

{

 int i , n ,sum ;

 printf("enter n :\n");

 scanf("%d" ,&n);

 for(i = 1 ; i <= n ; i++)

  {
    sum= (sum + (i*i));

  }

  printf("sum = %d\n" ,sum);

} 

   
