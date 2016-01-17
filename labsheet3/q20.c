/* Question 20 */

/* largest of 3 nos. */


#include <stdio.h>

main()

{

   int a , b, c ,d;

   printf(" enter the 3 nos.\n");

   scanf("%d %d %d " , &a,&b,&c);

   d = (a>b)?a:b;

   d = (d>c)?d:c;

   printf(" the largest of 3 nos. is %.2d\n" ,d);

}
