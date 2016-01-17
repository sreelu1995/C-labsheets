/* Question 22 */

/* printing out amstrong nos. */

#include <stdio.h>

#include <math.h>

main()

{

  int i = 0, a , sum = 0,j;

  printf("the following are amstrong nos. b/w 1 and 500\n");

  while (i<=500)

 {
    j=i;
   
    a = i%10;
  
   sum = sum + pow(a,3);

    i = i / 10;
  
    i++;
 
    
    if (j == i);

    printf("%d" ,i);
}
 

}
   

   
