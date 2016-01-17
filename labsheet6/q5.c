/* question 5 */

/* to find the second biggest no. in an array */

#include <stdio.h>
#define n 100

main()
{

  int i, a[n], m, max, p, sec_max, q;
  
  printf("enter the no of numbers you want to enter\n");
  
  scanf("%d", &m);

  printf("enter integers\n");

  for(i = 0; i < m; i++)
  {
    scanf("%d", &a[i]);
  }

  max = a[0];

  for(i = 0; i < m; i++)
  {
    if(max < a[i])
      {
	max = a[i];
	p = i;
      }
      
  }

  q = a[p];
  a[p] = a[m-1];
  a[m-1] = q;

  sec_max = a[0];

  for(i = 0; i < m-1; i++)
    {
      if(sec_max < a[i])
      {
	sec_max = a[i];
	
      }

    }

  printf("second max is %d\n", sec_max);

}

  
  

  