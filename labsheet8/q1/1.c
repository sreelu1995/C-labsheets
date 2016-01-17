/* basic use of pointers */
/* question 1 */

#include <stdio.h>

main() {
  
  int x;
  int ip;
  
  printf("enter a number\n");
  scanf("%d",&x);
  ip = &x;
  printf("%d", ip);

}