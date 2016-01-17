/* question2 */
/* character pointer */

#include <stdio.h>
main()
{
  char name[10];
  int i;
  char *a;
  
   a=name;
  printf("enter a 10 character name\n");

  scanf("%s",name);

  while(*a!='\0')
  {
    printf("%c",*a);
    a++;
  }

  printf("\n");
  
}