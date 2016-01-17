/* question 2 */
/* contatenation of two strings using library function */

#include <stdio.h>
#include <string.h>

main()
{
  int i;
 
  char a[50], b[50], c[50];

  printf("enter two statements\n");

  gets (a);
  gets (b);
  
  for(i = 0; a[i] != '\0'; i++)
    
    c[i]=a[i];

  printf("new concatenated statement is %s\n",strcat(a,b));

  printf("your initial statements were %s and %s\n", c,b);

}
