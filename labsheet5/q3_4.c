/* question 3 and 4 */
/* populating an array using library functions rand() and srand() */

#include <stdio.h>
#include <stdlib.h>

main()
{
  int a[10];
  int i, max;
  srand(10);
  for(i = 0; i< 10; i++){
  
    a[i] = rand()%1000;
  }
    max = a[0];
  
  for(i=1; i<10; i++){

    if(a[i]>max)
    max = a[i];    
  
  }
  printf("%d is the max\n",max);
}