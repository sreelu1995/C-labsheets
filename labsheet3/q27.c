/* Question 27 */

/* average of 5 numbers. */

#include <stdio.h>

main()

{

  long int a ,b ,c ,d ,e;

  float f;

  printf("Enter 5 nos.\n");

  scanf("%ld%ld%ld%ld%ld" ,&a, &b, &c, &d, &e);

  f = (a+b+c+d+e)/5;

  printf("Average is %f\n", f);

}
