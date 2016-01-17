/* Question 1  and 2*/

/* Array of size 10 and find max in the array using preprocessor const. */

#include <stdio.h>
#define size 10

main()
{
  int a[size], i, max;
  
  printf("Enter 10 integers\n");

  
  for(i = 0; i < size ; i++)
  {
    scanf("%d", &a[i]);
  }

  max = a[0];
  
  for(i = 0; i < size ; i++)
  {
    if(max < a[i])

      max = a[i];
  }
   
  printf("maximum in the array is %d\n", max);
}