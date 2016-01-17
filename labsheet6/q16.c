/* question 16 */

/* concatenate two strings */

#include <stdio.h>
main()

{
  
  int i,j ;
  char a[50], b[50];
  
  printf("enter your name\n");  
  scanf("%s" ,a);
  
  printf("enter your surname\n");  
  scanf("%s", b);
  
  for(i = 0; a[i] != '\0'; i++)
  {
  }
  
    
  for(j=0; b[j] != '\0'; j++)
  {
    a[i] = b[j];
    i++;
    
  }
    
  a[i] ='\0';
  printf("%s\n",a);
  
}
  