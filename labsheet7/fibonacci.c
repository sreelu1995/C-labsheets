/* to find out nth number of fibonacci series using recursive function */

#include <stdio.h>
int fib(int);
main() {

  int n;

  printf("enter the nth number of fibonacci series\n");
  scanf("%d", &n);

  printf("the %d number of series is %d\n", n, fib(n));
}

int fib(int n) {
  
 
  if((n == 1)||(n == 2))
  return 1;

  else
  return  fib(n-1)+fib(n-2);
  
}