/* question 1 */
/* printing address of elements in an array */

#include <stdio.h>
main()
{
  int a[5];
  int i;

  for(i=0; i<5; i++)
  {
    printf("%p is the address of %d element\n",(a+i),i);
        
  }
   for(i=0; i<5; i++)
   {
    
     printf("%u is the address of %d element\n",(unsigned)a+i,i);
   }
}