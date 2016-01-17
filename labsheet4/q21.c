/* Question 21 */

/* generating n terms of series 0 ,3 ,7,... */

#include <stdio.h>

main()

{

  int x = 3 , n, y =0 ,z , i = 2;

  printf("enter n \n");

  scanf("%d" ,&n);

  printf("0 ,3,");

  while (i < n)
 
   {

     z = ((x-y) +1) +x;

     printf("%d,",z);

     y = x;

     x = z;
  
     i++;

   }

}


     

   
