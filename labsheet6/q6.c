/* question 6 */
/* duplicate numbers */

#include <stdio.h>
main()

{

  int a[10], i, j;

  printf("enter 10 integers\n");
  
  for(i =0; i < 10; i++)
  {
    scanf("%d", &a[i]);
  }

  for(i =0; i < 10; i++)
  {
    for(j = i+1; j < 10; j++)
    
    {
      if(a[i] == a[j])
	
	printf("positions of duplicate no. are %d, %d\n", i, j);
     
    }
  }
}