/* question 3 */

/* Grades */

#include <stdio.h>

main()

{

  float a;

  char ch;
  
  printf("Enter the marks\n");

  scanf("%f" ,&a);

  if ((a>=0)&&(50>=a))
  
   ch = 'F';

 else if((a>=51)&&(70>=a))

   ch = 'D';

 else if((a>=71)&&(80>=a))

   ch = 'C';

 else if((a>=81)&&(90>=a))

  ch = 'B';
 
 else ch = 'A';

  printf("Your grade is %c\n" ,ch);
}
