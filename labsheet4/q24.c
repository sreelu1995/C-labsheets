/* Question 24 */

/* primes b/w 1 and 300 */

#include <stdio.h>

main()

{

  int i, j, n = 300;

  printf("2, ");

  for(i = 3; i <= n; i++)
   {
	for(j = 2; j <= i-1; j++)
	 {
	    if (i % j == 0) 
                break;
           
	    else if (i == j+1)
               
