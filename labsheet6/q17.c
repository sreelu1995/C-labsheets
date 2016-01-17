/* question 17 */
/* concatenate and compare two strings using library function */

#include <stdio.h>
#include <string.h>

main()
{
  char a[20], b[20];
   
  printf("enter a string\n");
  scanf("%s", a);

  printf("enter another string\n");
  scanf("%s", b);

  if(strcmp(a,b) == 0)
  { printf("both the entered strings are equal\n");
  }
  
  else 
    printf("strings are not equal\n");
  
  printf("the concatenated string is %s\n", strcat(a,b));

}