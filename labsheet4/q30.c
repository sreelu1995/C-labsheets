/* question 30 */
/* printing pattern of 4*10 zeroes */

#include <stdio.h>
main()
{
  int i, j;

  for(i = 0; i < 4; i++)
  {
    for(j = 0; j < 10; j++)
    {
      printf("0");
    }
    
    printf("\n");
  }
}