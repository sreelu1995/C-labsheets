/* question 2 */
/* swap function using pointers */

#include <stdio.h>

void swap(int*, int*);
main() {
  
  int i, j;

  printf("enter two numbers\n");
  scanf("%d%d",&i,&j);

  swap(&i,&j);

  printf("%d = i and %d = j\n",i,j);
}

void swap(int *a, int *b) {
  
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
  
}