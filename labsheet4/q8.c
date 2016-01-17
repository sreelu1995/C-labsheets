/* Question 8 */

/* encryption */

#include <stdio.h>

main()

{

  int i;
 
  int ch;
  
  ch = getchar();
  
  while( ch != EOF)

  {
  
    i = ch + 13;

   printf("%c" ,i);
   
    ch = getchar();
  
  }

}
