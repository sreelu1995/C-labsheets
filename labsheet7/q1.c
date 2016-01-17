/* question 1 */

/* comaprision of 2 strings */

#include <stdio.h>
#include <string.h>

main()
{
  int i;

  char a[10], b[10];

  printf("enter two strings\n");

  scanf("%s%s",a,b);

  i =  strcmp(a,b);
    
  if(i == 0)
    printf("both the strings are same\n");

  else
    printf("both the strings are not same \n");
}

