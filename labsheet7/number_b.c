/* recursive function to print all the nos from n-1 */

#include <stdio.h>
void number(int);
main() {
  
  int n;

  printf("enter a number \n");
  scanf("%d", &n);

  number(n);
}

void number(int n) {
  
  if(n>0) {
   
   printf("%d  ",n);
   number(n-1);
  }


}