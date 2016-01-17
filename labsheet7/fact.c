/* recursive  function */
/* to find a factorial of a number */

#include <stdio.h>
long int fact(int);
main() {

  int a;
  long int i;

  printf("enter a number\n");
  scanf("%d",&a);

  i = fact(a);
  printf("factorial of %d is %ld\n", a,i);
}

long int fact(int i) {
       
  if(i == 1)
  return 1;

  else
   return i*fact(i-1);
 
  
}