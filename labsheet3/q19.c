/* Question 19 */

/* distance between 2 points */

#include <stdio.h>

#include <math.h>

main()

{

   int  x1 , y1 , x2 , y2; 

   float  d ;

   printf(" Enter the coordinates\n");

   scanf("%d %d %d %d ", &x1 ,&y1, &x2, &y2);

   d = sqrt ( pow (x2-x1 , 2) + pow (y2-y1 , 2));

   printf("the distance between 2 pts. is %f \n" ,d);

}  

   
