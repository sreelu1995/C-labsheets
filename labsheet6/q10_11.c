/* question 10 and 11 */
/* printing string using different functions */

#include <stdio.h>
main()
{
  int i;
  char name[10];

  printf("enter your name\n");
  scanf("%s",name);

  printf("%s\n",name);

  puts(name);

  for(i=0; name[i] != '\0'; i++);
  {
    putchar(name[i]);
  }

}