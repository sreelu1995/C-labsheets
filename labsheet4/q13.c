/* Question 12 */

/* average of n nos. */

#include <stdio.h>

main()

{

  int a,n ,i;
  
  printf("enter no. and times\n");

  scanf("%d%d" ,&a ,&n);

  for(i = 1 ;i <= n; i++)

    {

      printf("%d * %d = %d\n" ,a , i ,a*i);

    }

}
