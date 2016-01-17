/* binary search */

#include <stdio.h>
#define size 10;
int bin_search (int a[], int , int);
main()
{
  int i, a[size], key , pos;
  printf("enter 10 integers in ascending order\n");

  for(i=0; i<size; i++) {
	scanf("%d", &a[i]);
  }

  printf("enter the key you want to search\n");
  scanf("%d", &key);

  pos = bin_search(a,size,key);
  
  if(pos == -1)
   printf("key not found\n");
  
  else  
   printf("the key is found in position %d\n", pos); 
}

int bin_search(int a[]; int size ; int key) {

  int i, l =0, h = 9, m;
  for(i=0; i<size; i++) {
	m = (l+h)/2;

	if(a[m]>key) 
	 l =m+1;

	else if (a[m] == key)
	 return m;
	
	else if
	 (h = m-1);
  }
}
