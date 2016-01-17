/* recursive function to print all the nos from 1-n */

#include <stdio.h>
void number(int);
main() {
  
  int n;

  printf("enter a number till you want to print\n");
  scanf("%d", &n);

  number(n);
}

void number(int n) {
  
  if(n>0) {
   number(n-1);
   printf("%d  ",n);
  }


}