/* question 27 */

/* use of break statement in for loop */

#include <stdio.h>

main()

{
 int i, j;

 printf("enter the no. of times the loop should work\n");

 scanf("%d", &j);

 for(i=0; ; i++)
 {  
   if(i==j)
    break;
 }
 
 printf("bye bye\n");
}
