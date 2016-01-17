/* Question 12 */

/* average of n nos. */

#include <stdio.h>

main()

{

 int a ,n ,i, sum;
 
 float avg;
 
 printf("enter n \n");

 scanf("%d" ,&n);
 
 sum =0;
 
 for(i = 1 ; i <=n ; i++)

    {
      scanf("%d" ,&a);

      sum += a;

    }
 
     avg = sum/n;
   
    printf("average = %f\n" ,avg);


}

      

    
 
