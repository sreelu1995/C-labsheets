/* question 28 */

/* getting a no. from the user and printing the reverse */

#include <stdio.h>

main()

{
  int i = 1, rem, n, a;

  printf("how many digits are you going to enter?\n");

  scanf("%d", &n);

  printf("enter your number\n");

  scanf("%d", &a);

  while(i <=n) 
 {
  
    rem = a%10;

    printf("%d",rem);

    a=a/10;

    i++;
 }
  printf("\n");
}	
