/* question 28 */

 #include<stdio.h>

 main()
 {

  int d1,d2,d3,d4, n, rev=0, sum=0;
 
  printf("enter your number:\n");

   scanf("%d", &n);

     d1=n%10;                  
 
    rev = rev * 10 + d1;      

     n = n/10;                 

     d2 = n%10;                

   rev = rev * 10 + d2;       

   n = n /10;                

   d3 = n % 10;              

   rev = rev * 10 + d3;       

   n = n /10;                

   d4 = n % 10;              

   rev = rev * 10 + d4; 
 
    n = n /10;               
 
   sum = d1 + d2 + d3 + d4;
 

   printf("\nReversed number is %d",rev);

   printf("\nThe sum of digits is %d",sum);
 }
