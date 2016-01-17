/* question */

/* electricity bills */

#include <stdio.h>

main()

{
     float rate , a ,b ,c;

     printf("enter the comsumption unit.\n");

     scanf("%f" ,&a);

     if ((a>=0)&&(150>=a))
     
     { rate = 3; 
       b = 0;   }

   else  if ((a>=151)&&(350>=a))

     {  rate = 3.75;
        b = 100; }
  
   else  if ((a>=351)&&(450>=a))

     { rate = 4;
       b = 250 ;}

   else   if ((a>=451)&&(600>=a))
    
      { rate = 4.25;
        b = 300; }

     else 
     { rate = 5;
       b = 400;}
   
      c = b + (rate*a);

   printf(" Your bill %f\n",c);

}
     
