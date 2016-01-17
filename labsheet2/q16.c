/* Question 16 */

/* Sum of to numbers in decimal, octal and hexa. no. sustem */

#include <stdio.h>

main()

{

  int x , y , sum ;

  printf(" Enter the two numbers:\n");

  scanf("%d %d",&x,&y);
  
  sum = x + y;

  printf(" The sum of given numbers in decimal system is %d\n",sum);

  printf("the sum of given numbers in octal system is %o\n" ,sum );

  printf("the sum of given numbers in hexadecimal system is %x\n" ,sum );

}

   
  
