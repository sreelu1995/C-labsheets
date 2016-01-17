/* question 3 */
/* character pointer */

#include <stdio.h>
main()

{
  char a[10];
  char *b;
  b=a;

  printf("enter your favourite colour\n");
  scanf("%s",a);

  printf("oh! so your favourite colour is ");
  while(*b!='\0')
  {
     printf("%c",*b);
     b++;
  }
  printf("\n");
}