/* question 26 */

/* arithmetic operators */

#include <stdio.h>

main()

{

  int a, b,d;
  char c;


  printf("enter the operator\n");
 
  scanf("%c",&c);

   printf("enter 2 integers and\n");

  scanf("%d%d", &a,&b);


  switch(c)
 {
  case '*':
          d=a*b;
          break;

  case '-': 
          if(a>b)
          d=a-b;
          else
          d=b-a;
          break;
         

  case '+':
          d=a+b;
          break;

  case '/':
          d=a/b;
         break;

  default: printf("invalid operator\n");
          break;
 }

  printf("%d\n",d);

}

          
 
   

          
