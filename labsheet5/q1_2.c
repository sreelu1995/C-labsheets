/* question 1 and 2 */

/* 10 intergers and storing them in array and largest int in an array */

#include <stdio.h>
#define size 10

main()

{

  int a[size], i ,j ,max;

  printf("Enter 10 integers\n");

  for(i = 0; i < size ; i++)

  {

     scanf("%d",&a[i]);

   }

 max = a[0];

  for(j = 1; j < size; j++)

  {

   if(a[j] > max)

    max = a[j];

   }

  printf("max is %d\n",max);

}
  

  
