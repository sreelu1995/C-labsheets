/* question 14 */
/* to find the length of the string */

#include <stdio.h>
main()
{
  char subject[20];
  int i;
  
  printf("enter  your favourite subject \n");
  
  scanf("%s", subject);
  
  for(i = 0; subject[i] != '\0'; i++)
  {
  }
  
  printf(" length of the string is %d\n",i);
  
}