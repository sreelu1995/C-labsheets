/* Question 25 */

/* menu driven program */

#include <stdio.h>

main()

{

  int a,b,c,d;

  float result;

 
  printf("enter numbers\n");

  scanf("%d%d%d",&a,&b,&d);

 
  printf("select option\n 1.Calculate total\n 2.Calculate average\n"
       
        " 3.Display the smallest\n 4.Display the largest\n 5.exit.\n");

  scanf("%d",&c);


  switch(c)

 {
    case 1: result= a+b+d;
           break;

    case 2:result =(float)(a+b+d)/3;

             break;
   
    case 3:result = (a<b)?((a<d)?a:d):((b<d)?b:d) ;
 
            break;

    case 4: result = (a>b)?((a>d)?a:d):((b>d)?b:d) ;

             break;

    default : printf("bye bye\n");

            break;

}

   printf("%f/n",result);

}
        
            

 
