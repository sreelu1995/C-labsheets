/* Question 23 */ 

/* factorial of a no. */

#include <stdio.h>

main()

{

   int i = 1 ,n;

  long int a =1;

  printf("enter a no\n");

  scanf("%d" ,&n);

  while (i <= n)

 {

   a = a*i;

   i++;

 }

  printf("factorial %d is %ld \n",n ,a);

}



