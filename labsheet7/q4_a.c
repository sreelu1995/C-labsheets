/*question 4_a */

/* analogous function for strlen */

#include <stdio.h>
int length(char a[]);                                                                          

main()
{
  int  i;

  char a[50];

  printf("enter a statement\n");

  gets(a);

  i = length(a);

  printf("length of the statement is %d\n", i);
}


/* length function */

int length(char a[])
{
  int i;

  for(i = 0; a[i] != '\0'; i++)
  {
  }
   return i;
}


  