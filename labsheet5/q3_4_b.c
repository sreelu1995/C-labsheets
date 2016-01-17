/* question 3 and 4 */
/* populating an array using library functions rand() and srand() and arranging in ascending order*/

#include <stdio.h>
#include <stdlib.h>

main()
{
  int a[10];
  int i,j,tmp,min;
  srand(10);
  for(i = 0; i< 10; i++){
  
    a[i] = rand()%1000;
  }
   
   
    for(i=0; i<10; i++){
      min = i;
    
      for(j = i+j; j<10; j++){
	if(a[i]<a[min]){
	min = j;
    }
  }
    tmp=a[i];
    a[i]=a[min];
    a[min]=tmp;
    }    
  for(i=0; i<10; i++){
    printf("%d ",a[i]);
  }

    printf("\n");
}
