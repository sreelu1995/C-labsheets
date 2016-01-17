/* to calculate x^n without using math library */

#include <stdio.h>

main()
{
    int count, n ;
    float x, y ;

   printf("Enter base and exponent\n");
   scanf("%f %d" ,&x,&n);

   y = 1.0;
    count = 1;
  
   while (count <= n)
    {
        y = y*x;
        count++;
    }

 printf("\nx = %f; n = %d; x to power n = %f \n ", x,n,y);

}

