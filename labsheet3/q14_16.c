/* Question 14 */

/* maximum of two nos. */

#include <stdio.h>

main()

{

    float a , b, max;

    printf(" Enter two numbers\n");

    scanf("%f %f" ,&a ,&b);

    max = (a>b) ? a : b;

    printf("the maximun of two nos. is %f\n" , max);

}
