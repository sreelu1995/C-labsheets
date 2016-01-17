/* question 3 */

/* to find the mean of elements in an array */

#include <stdio.h>
#define n 100

main()
{

  int i, a[n], m;

  float mean = 0;
  
  printf("enter the no of numbers you want to enter\n");
  
  scanf("%d", &m);

  printf("enter integers\n");

  for(i = 0; i < m; i++)
  {
    scanf("%d", &a[i]);
  }

  for(i = 0; i < m; i++)
  {
    mean = mean + a[i];
  }

  mean = mean/m;
  
  printf("average of entered nos. is %f\n", mean);

}

  