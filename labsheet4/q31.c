/* question 31 */
/* printing a pattern of 5*5 increasing numbers form 1-5 */

#include <stdio.h>

main()
{

  int i, j;

  for(i = 1; i <= 5; i++)
  {
    printf("Pass %d: ",i);

    for(j = 1; j <= 5; j++)
    {
	printf("%d ",j);
    }
  
    printf("\n");
  }

}