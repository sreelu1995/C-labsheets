/* simple program using exit statement */

#include <stdio.h>
#include <stdlib.h>

main()
{
  int a, b;
  printf("enter a and b ;two integers:\n");
  scanf("%d%d", &a,&b);
  
  if (b==0)
  {  printf("bye bye\n");
  exit(0);
  }

  else
  printf("%d divided %d is %f\n",a,b,(float)a/b);
}