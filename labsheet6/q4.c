/* question 4 */

/* interchanging values of max and min */

#include <stdio.h>
#define n 10

main()
{

  int i, a[n], max, min, c,p,q;

  printf("enter 10 integers\n");

  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  max = a[0];
  min = a[0];

  for(i = 0; i < n; i++)
  {
    if(max < a[i])
    {
      max = a[i];
      p = i;
    }

    else if (min > a[i])
    {
      min = a[i];
      q = i;
    }
  }
  
  printf("max is %d at position %d and min is %d at position %d\n", max, p, min, q);
  
  c = a[p];
  a[p] = a[q];
  a[q] = c;
  
  printf("max = %d , position %d and min= %d, position %d\n", a[q], q, a[p], p );
  
}

  
  

      