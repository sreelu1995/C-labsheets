/* Question */

/* Parking charges */

#include <stdio.h>

main()
{

  char ch;

  int h , rate, a ;

  printf("Enter vehicle's first letter\n");

  scanf("%c",&ch);

  printf("Enter time in hours\n");

  scanf("%d" ,&h);

  if (ch=='c')
  
   rate = 10;

  else if ((ch =='b') || (ch=='t'))
   
   rate = 20;
  
  else if ((ch=='s') || (ch=='m'))
  
  rate = 5;
  
  a = rate*h;

 printf("The parking bill = %d\n" ,a);

}
