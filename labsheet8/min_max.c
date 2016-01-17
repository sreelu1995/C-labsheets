/* to find max , min of three numbers using pointers */
/* question 4 */

#include <stdio.h>
void input(int*, int*, int*);

main() {
  
  int a, b, c;

  input(&a,&b,&c);
}

void input(int *small, int *medium, int *large) {
  
  int i,j ;

  printf("enter three numbers\n");
  scanf("%d%d%d", small,medium,large);
  
	j=(*small < *medium) ? (*small < *large) ? *small : *large : (*medium < *large) ? *medium: *large;
  	
	i=(*small > *medium) ? (*small > *large) ? *small : *large : (*medium > *large) ? *medium: *large;

	printf("smallest is %d\n",j);
	printf("largest is %d\n",i);

	if((j!=*medium)&&(i!= *medium))
	printf("medium is %d\n", *medium);

	else if((j!=*small)&&(i!= *small))
	printf("medium is %d\n",*small);

	else 
	printf("medium is %d\n",*large);
	
}


  
