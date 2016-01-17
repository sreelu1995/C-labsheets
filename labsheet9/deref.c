/* question 8 */
/* derefrencing a pointer without giving it a proper address */

#include <stdio.h>
main()
{
  int *a;
  int b=5;
  
  printf("%p is what a pointer is storing\n",*a);
}