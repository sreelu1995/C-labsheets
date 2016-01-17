/* Question 11 */

/* Time conversion */

#include <stdio.h>
#define min 60
#define hour 3600

main()

{

  int x , y , z;
   
  printf(" Enter time in seconds\n");

  scanf("%d" ,&x);

  y = x / min;

  z = x / hour;

  printf("time in min is %d\n" ,y);

  printf("time in hours is %d\n" ,z);

}
