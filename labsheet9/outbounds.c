/* question 5 */
/* out of bounds of an array */

#include <stdio.h>

main()
{
  char s1[5] = "AAA", s2[5], *s, *b;
  int i;
  
  printf("enter a 5 character 2 strings\n");
  scanf("%s%s",s1,s2);
  
  s = &s2[5];
  b=s1;
  for(i=0; i<5; i++)
  {
    printf("%p for s2\n", s);
    printf("%c for s1\n", *b);
    s++;
    b++;
  }
}
