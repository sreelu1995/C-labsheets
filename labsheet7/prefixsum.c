/* question 3 , arrays and functions */

/* prefix sums */

#include <stdio.h>

void PrefixSums(int a[], int b[], int size);

main()
{

  int a[10], b[10], i;

  printf("enter 10 integers \n");
  
  for(i = 0; i< 10; i++){
 
    scanf("%d",&a[i]);
  }
  printf("prefix sums are..");
  
  printf("%d ",a[0]);
  PrefixSums(a,b,10);
  

}

void PrefixSums(int a[], int b[], int size)
{

  int i;

  for(i = 1; i < size; i++)
  {
    b[i] = a[i]+a[i-1];
  }

  for(i = 1; i < size; i++)
  {
    printf("%d ",b[i]);
  }
}

