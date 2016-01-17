/* question 3*/

/* counting vowels in a string */

#include <stdio.h>

main()
{

  int i,j;

  char a[50];
  
  printf("enter a statement\n");
  
  gets(a);

  for(i = 0; a[i] != '\0'; i++)
  {

    switch (a[i])
    {

      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': j++;
    }
  }
  
  printf("no. of vowles are %d\n", j);
}
