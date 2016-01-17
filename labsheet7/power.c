/* recursive power function */

#include <stdio.h>
long int power(int, int);

main() {
  
  int a, n;

  printf("enter the base first and then exponent\n");
  scanf("%d%d",&a,&n);


  printf("your answer is %ld\n",power(a, n));
}

long int power(int b, int m) {
  
  if(m == 0)
  return 1;

  else 
  return b*power(b,m-1);
}