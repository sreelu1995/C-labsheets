/* to find minimum and maximum elements in an array of doubles */

#include <stdio.h>
#include <string.h>

void minmax(double *data, int length, double *retmin, double *retmax);

main()
{
  double data[5], max,min;
    int i;
  
  printf("enter 5 elements(doubles)\n");

  for(i = 0; i<5; i++){
  
    scanf("%lf",&data[i]);
  }

  max = data[1];
  min = data[0];
  minmax( data, 5, &min, &max);

  printf("%lf is max and %lf is min\n",max,min);
}

void minmax(double *d, int length, double *retmin, double *retmax) {

  int i;

  for(i = 0; i<length; i++){

  if(*retmin > *(d+i))
    *retmin = *(d+i);

   if(*retmax < *(d+i))
     *retmax = *(d+i);
     
  
  }

 }
