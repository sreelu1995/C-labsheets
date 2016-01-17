/* Question 15 */

/* count positives ,negatives and zeros */

#include <stdio.h>

main()

{

  int i = 0 ,a ,n ,j = 0,k = 0;

  printf("enter n\n");

  scanf("%d" ,&n);
 
  printf("enter nos.\n");

  while (i + j + k < n)

    { 
       scanf("%d" ,&a);

  
       if (a > 0)

         i++;

       else if (a < 0)

         j++;

       else 
     
         k++;
   }

  printf("positive = %d \nnegative = %d \nzeroes = %d\n" ,i,j,k);

}

    
  
 
   
 

         
  
