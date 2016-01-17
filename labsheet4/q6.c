/* Question 6*/

/* reading character */

#include <stdio.h>

main()

{
   char ch;
   int a ,e ,i ,o ,u ,c ;

   a=e=i=o=u=c=0;

   printf("Enter \n");
 
   while ((ch = getchar()) != EOF)
  

  { if (ch=='a')
    a++;

       else if (ch=='e')
       e++;

      else if (ch=='i')
      i++;

      else if (ch=='o')
      o++;

      else if (ch=='u')
      u++;
  
   else if((int)ch!=32)
    c++;
  }
  printf("\na=%d\n,e=%d\n,i=%d\n,o=%d\n,u=%d\n,c=%d\n",a,e,i,o,u,c);
}
 
