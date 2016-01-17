/* question 4_b */

/* analogous function for strcpy */

#include <stdio.h>
void copy(char [], char[]);

main()

{
  char a[50], b[50];

  printf("enter a statement\n");

  gets(a);

  copy(a,b);
  
  printf("do not worry , i have got a copy of your statement\n");

  }

/* copy function */

void copy(char a[], char b[])

{
  int i;

  for(i = 0; a[i] != '\0'; i++)
    {
	b[i] = a[i];
    }
  
  b[i] = '\0';
  
  
}

    