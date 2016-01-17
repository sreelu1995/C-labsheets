/* question 4 */
/* printing out addresses of elements of an array */

#include <stdio.h>
main()
{
  int number[10], i;
  int *a;
  a=number;

  printf("enter 10 integers\n");

  for(i=0; i<10; i++)
  {
    scanf("%d",a);
    a++;
  }
  
  printf("addresses of the elements are\n");

  for(i=0; i<10; i++)
  {
    printf("element %d = %p\n",i,a);
    a++;
  }
  
  for(i=0; i<10; i++)
  {
    printf("element %d = %d\n",i,a);
    a++;
  }
  
}
