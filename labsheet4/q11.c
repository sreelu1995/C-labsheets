/* Question 11 */

/* max and min */

#include <stdio.h>

main()

{

   int a , i ,max, min;

   printf("enter nos.\n");

   scanf("%d" ,&a);

   max = a;
  
   min = a;


   for(i = 1; i <= 10; i++)

   {     
      scanf("%d",&a);
   
        if (a > max)
         
            max = a;

        if (a < min)

           min = a;



    }

    printf("max =%d \n min = %d\n" ,max, min);

}

   	  


     
