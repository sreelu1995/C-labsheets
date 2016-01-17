/* recursive function to find the sum of n numbers */

#include <stdio.h>
int sum(int);
main() {
  
 int n;
  printf("enter a number \n");
  scanf("%d",&n);
  
  printf("sum of first %d numbers is %d\n", n , sum (n));
}

int sum(int a) {
  
  int total=0;
  
  if(a>0){
 return a+=sum(a-1);
  }
  
}