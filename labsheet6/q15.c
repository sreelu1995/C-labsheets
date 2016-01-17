/* question 15 */

/* to convert the string to upper case */

#include <stdio.h>
main()

{
  char color[15];
  int i;
  
  printf("enter your favourite colour \n");
  scanf("%s", color);
  
  for(i = 0; color[i] != '\0'; i++)
  {
    printf("%c",color[i]-32);
    
  }
  
  printf("\n");
}