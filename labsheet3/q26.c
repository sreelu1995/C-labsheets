/* Question 26 */

/* leap year */

#include <stdio.h>

main()

{

  int a;

  printf("Enter a year\n");

  scanf("%d" ,&a);

  if((a % 4 == 0) && (a % 400 == 0) || (a % 100 != 0))

    {

       printf("LEAP YEAR\n");

    }

   else

    printf("NOT a LEAP YEAR\n");

}
