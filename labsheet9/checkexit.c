/* check exit function other than main */

#include <stdio.h>
#include <stdlib.h>
void check(int* , int*);

main()
{ 
  int a , b;
  printf("enter two integers\n");
  scanf("%d%d",&a,&b);
  check(&a,&b);
}
void check(int *a, int *b)
{
  if(*a > *b)
  {
    printf("you get a number greater than 1 if a and b are divided\n");
    exit(0);
    printf("bye bye\n");
   }
  else
  printf("you get a number less than 1 if a and b are divided\n");
}