/* question 2 */
/* swap character using pointers */

#include <stdio.h>
void charswap ( char*, char*);

main() {
  
  char a, b;

  printf("enter two characters\n");
  scanf("%c%c",&a,&b);

  charswap(&a,&b);

  printf("you know what? .. i stored %c in a and %c in b\n", a,b);
}

void charswap(char *i, char *j) {
  
  char tmp;

  tmp = *i;
  *i = *j;
  *j = tmp;
}